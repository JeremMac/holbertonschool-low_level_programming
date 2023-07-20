#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function to sum all
 * of the given prameters
 * @n: the first argument of my function
 * Return: the result of the sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	int sum;

	va_start (ap, n);
	sum = 0;
	for (index = 0; index < n; index++)
	{
		sum += va_arg (ap, int);
	}

	va_end (ap);
	return (sum);
}
