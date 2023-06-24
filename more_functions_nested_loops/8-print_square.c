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

	for (prt = 0; prt < size; prt++)
	{
		_putchar('\n');
		for (sqr = 0; sqr < size; sqr++)
		{
			_putchar('#');
		}
	}
}
