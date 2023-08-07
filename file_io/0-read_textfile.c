#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - write a funtcion
 * that reads a text file and prints it
 * @filename: a pointer to the file
 * to print
 * @letters: the size_t number of letter
 * in filename
 * Return: -1 if there is an error
 * otherwise return the number of letters
 * in filename
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t reader, resultat;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	reader = read(fd, buffer, letters);

	if (reader == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	resultat = write(STDOUT_FILENO, buffer, reader);

	free(buffer);
	close(fd);

	return (resultat);
}
