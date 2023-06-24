#include "main.h"
/**
 * print_triangle - prints a triangle
 * int - type of size
 * @size: member of print_triangle
 *Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int spc;
	int tgl;
	int endl;

	for (spc = size; spc == size; spc--)
	{
		_putchar(' ');
		_putchar('\n');
		for(endl = size; endl < size; endl++)
		{
			for (tgl = 0; tgl < size; tgl++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
