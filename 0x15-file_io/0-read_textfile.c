#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t nr, nw;
	char *buff;

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDONLY);

	if (fo == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	nr = read(fo, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(fo);

	free(buff);

	return (nw);
}
