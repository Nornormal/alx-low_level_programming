#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	int letterno;
	int wr;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_APPEND);

	if (fo == -1)
		return (-1);

	if (text_content)
	{
		for (letterno = 0; text_content[letterno]; letterno++)
			;

		wr = write(fo, text_content, letterno);

		if (wr == -1)
			return (-1);
	}

	close(fo);

	return (1);
}
