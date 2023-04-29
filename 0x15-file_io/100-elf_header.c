#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * prnt_adr - function that prints address
 * @point: pointer to address
 * Return: nothing
 */
void prnt_adr(char *point)
{
	int j;
	int start;
	char sstem;

	printf("  Entry point address:               0x");
	sstem = point[4] + '0';
	if (sstem == '1')
	{
		start = 26;
		printf("80");
		for (j = start; j >= 22; j--)
		{
			if (point[j] > 0)
				printf("%x", point[j]);
			else if (point[j] < 0)
				printf("%x", 256 + point[j]);
		}
		if (point[7] == 6)
			printf("00");
	}
	if (sstem == '2')
	{
		start = 26;
		for (j = start; j > 23; j--)
		{
			if (point[j] >= 0)
				printf("%02x", point[j]);

			else if (point[j] < 0)
				printf("%02x", 256 + point[j]);

		}
	}
	printf("\n");
}

/**
 * prnt_osb - function that prints osabi
 * @point: a pointer to osabi.
 * Return: nothing.
 */
void prnt_osb(char *point)
{
	char osb = point[7];

	printf("  OS/ABI:                            ");
	if (osb == 0)
		printf("UNIX - System V\n");
	else if (osb == 2)
		printf("UNIX - NetBSD\n");
	else if (osb == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osb);

	printf("  ABI Version:                       %d\n", point[8]);
}

/**
 * prnt_mag - functprints magic info.
 * @point: pointer to magic.
 * Return: nothing.
 */
void prnt_mag(char *point)
{
	int byt;

	printf("  Magic:  ");
	for (byt = 0; byt < 16; byt++)
		printf(" %02x", point[byt]);

	printf("\n");

}

/**
 * prnt_ver - function that prints version
 * @point: pointer to version.
 * Return: nothing.
 */
void prnt_ver(char *point)
{
	int ver = point[6];

	printf("  Version:                           %d", ver);

	if (ver == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * prnt_dt - function that prints data
 * @point: pointer to data.
 * Return: nothing.
 */
void prnt_dt(char *point)
{
	char d = point[5];

	printf("  Data:                              2's complement");
	if (d == 1)
		printf(", little endian\n");

	if (d == 2)
		printf(", big endian\n");
}

/**
 * prnt_typ - function that print type
 * @point: a pointer to type
 * Return: nothing.
 */
void prnt_typ(char *point)
{
	char tp = point[16];

	if (point[5] == 1)
		tp = point[16];
	else
		tp = point[17];

	printf("  Type:                              ");
	if (tp == 0)
		printf("NONE (No file type)\n");
	else if (tp == 1)
		printf("DYN (Shared object file)\n");
	else if (tp == 2)
		printf("REL (Relocatable file)\n");
	else if (tp == 3)
		printf("EXEC (Executable file)\n");
	else if (tp == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", tp);
}

/**
 * chk_sstem - function that check the version system.
 * @point: pointer to version system.
 * Return: nothing.
 */
void chk_sstem(char *point)
{
	char sstem = point[4] + '0';

	if (sstem == '0')
		exit(98);

	printf("ELF Header:\n");
	prnt_mag(point);

	if (sstem == '1')
		printf("  Class:                             ELF32\n");

	if (sstem == '2')
		printf("  Class:                             ELF64\n");

	prnt_dt(point);
	prnt_ver(point);
	prnt_osb(point);
	prnt_typ(point);
	prnt_adr(point);
}

/**
 * chk_elf - function that check elf file.
 * @point: pointer to elf file.
 * Return: 1 or 0.
 */
int chk_elf(char *point)
{
	int adr = (int)point[0];
	char E = point[1];
	char L = point[2];
	char F = point[3];

	if (adr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - program that displays the information
 * contained in the ELF header at the start of an ELF file.
 * @ac: number in aarray arguments.
 * @av: array of arguments.
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int fo, retn_red;
	char point[27];

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fo = open(av[1], O_RDONLY);

	if (fo < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(fo, 0, SEEK_SET);
	retn_red = read(fo, point, 27);

	if (retn_red == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!chk_elf(point))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	chk_sstem(point);
	close(fo);

	return (0);
}
