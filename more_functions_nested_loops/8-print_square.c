#include "main.h"
/**
 * print_square - print a square
 * int - type of size
 * @size: member of print_square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int prt;
	int sqr;

	if (size > 0)
	{
	for (prt = 0; prt < size; prt++)
	{
		for (sqr = 0; sqr < size; sqr++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
