#include "main.h"
/**
 * print_triangle - prints a triangle
 * int - type of size
 * @size: member of print_triangle
 *Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int tgl;
		for (tgl = 0; tgl < size; tgl + 2)
		{
			_putchar('#');
		}
}
