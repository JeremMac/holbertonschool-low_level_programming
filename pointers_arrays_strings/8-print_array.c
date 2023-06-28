#include "main.h"
#include <stdio.h>
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

	for (len = 0; len <= n; len++)
	{
		printf("%d", len);
	}
}
