#include "main.h"
/**
 * print_array - print n element of an array
 * Return: nothing
 * int _ type of *a and n
 * @a: member of print_array
 * @n: second member of print_array
 */
void print_array(int *a, int n)
{
	int len = 0;

	while (a[len] <= n)
	{
		_putchar(a[len]);
		_putchar(',');
		_putchar(' ');
		len++;
	}
}
