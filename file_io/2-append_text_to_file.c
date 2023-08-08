#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - a function
 * that append texts at the end of a file
 * @filename: the given file we want to
 * add text to
 * @text_content: a NULL terminated string
 * we want to append into filename
 * Return: -1 if there is an error
 * otherwise return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, writing = 0, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);

		fd = open(filename, O_WRONLY | O_APPEND);

		writing = write(fd, text_content, length);

		if (writing == -1)
		{
			return (-1);
		}

		close(fd);

		return (1);
	}

	return (1);
}
