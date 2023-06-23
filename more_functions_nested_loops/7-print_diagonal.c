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

	for (hauteur = 0; hauteur < n; hauteur++)
	{
		for (a = 1; a < n; a++)
		{
			_putchar(spc + '0');
		}
		_putchar('\\');
	}
}
