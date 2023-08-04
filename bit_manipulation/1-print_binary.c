#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that
 * prints binary numbers
 * @n: the binary number we will
 * print
 * Return: nothing
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
