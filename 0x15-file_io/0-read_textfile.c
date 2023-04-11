#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(o);

	free(buff);

	return (w);
}
