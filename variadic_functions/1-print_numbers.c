#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - a function that prints
 * numbers followed by a newline
 * @separator: the string to be
 * to be printed between numbers
 * @n: the number of integers
 * passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, index2 = 0;

	va_start(ap, n);

	if (separator != NULL)
	{
		while (index2 < n)
		{
			index2++;
		}
		index2--;

		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(ap, int));
			if (index != index2)
			{
				printf("%s", separator);
			}
			if (separator == NULL)
			{
				printf("NULL");
			}
		}
		printf("\n");
	}
	va_end(ap);

}
