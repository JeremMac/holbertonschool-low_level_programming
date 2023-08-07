#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - a function
 * that creates a file
 * @filename: a string with the name
 * of the file to be created
 * @text_content: the content to
 * be implemented in the created file
 * Return: -1 if there is an error
 * otherwise, return 1
 */

int create_file(const char *filename, char *text_content)
{
	int length = 0, writing = 0, opening = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);
	}

	opening = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writing = write(opening, text_content, length);

	if (opening == -1 || writing == -1)
	{
		return (-1);
	}

	close(opening);

	return (1);
}
