#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints a strings
 * @separator: a string that contains
 * a character to be printed between the strings
 * @n: the number of strings to be printed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count, n_length = 0;
	char *str_arg;

	va_list ap;

	va_start(ap, n);

	while (n_length < n)
	{
		n_length++;
	}

	n_length--;

	for (count = 0; count < n; count++)
	{
		str_arg = va_arg(ap, char *);

		if (str_arg != NULL)
		{
			printf("%s", str_arg);
		}

		if (str_arg  == NULL)
		{
			printf("(nil)");
		}

		if (count != n_length && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
