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
	char spc;

	spc = ' ';
	hauteur = 0;

	while (hauteur < n)
	{
		_putchar('\\');
		for (a = 1; a < n; a++)
		{
			_putchar(spc + '0');
			spc++;
		}
		hauteur++;
	}
}
