#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_it - a function that
 * checks if a close function
 * value is -1 and prints
 * an error
 * @a: the variable we needs
 * to close
 * Return: nothing
 */

void close_it(int a)
{
	int b = 0;

	b = close(a);
	if (b == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", a);
		exit(100);
	}
}


/**
 * main - a function that
 * copy the content of a
 * file into another created
 * file
 * @argc: number of arguments
 * passed to main
 * @argv: an array containing
 * all argument passed to main
 * Return: exit the program
 * if there is an error
 * otherwhise return 1
 */

int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2];
	int o = 0, o2 = 0, r = 0, w = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	o = open(file_from, O_RDONLY);
	o2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	r = read(o, buffer, sizeof(buffer));
	if (r == -1 || o == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(o);
		exit(98);
	}
	while (r > 0)
	{
		w = write(o2, buffer, r);
		if (o == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		r = read(o, buffer, sizeof(buffer));
	}
	close_it(o);
	close_it(o2);
	return (0);
}

