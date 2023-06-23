#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * Return: nothing
 * @n: member of print_diagonal
 */
void print_diagonal(int n)
{
	int hauteur;
	int a;

	hauteur = 0;

	while (hauteur < n)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(' ');
			_putchar('\n');
		}
		_putchar('\\');
		hauteur++;
	}
}
