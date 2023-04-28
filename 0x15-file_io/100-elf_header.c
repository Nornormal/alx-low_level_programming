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
			if (point[i] >= 0)
				printf("%02x", point[j]);

			else if (point[j] < 0)
				printf("%02x", 256 + point[j]);

		}
	}
	printf("\n");
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
		printf("<unknown: %x>\n", type);
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
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * print_version - prints version
 * @ptr: magic.
 * Return: no return.
 */
void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - prints data
 * @ptr: magic.
 * Return: no return.
 */
void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}
/**
 * print_magic - prints magic info.
 * @ptr: magic.
 * Return: no return.
 */
void print_magic(char *ptr)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", ptr[bytes]);

	printf("\n");

}

/**
 * check_sys - check the version system.
 * @ptr: magic.
 * Return: no return.
 */
void check_sys(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_addr(ptr);
}

/**
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *ptr)
{
	int addr = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	ret_read = read(fd, ptr, 27);

	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys(ptr);
	close(fd);

	return (0);
}
