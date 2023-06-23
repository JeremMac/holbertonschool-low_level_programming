#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * Return: nothing
 * @n: member of print_diagonal
 */
void print_diagonal(int n)
{
	int hauteur;
	int longueur;

	hauteur = 0;
	longueur = 0;

	while (hauteur < n)
	{
		_putchar('\\');
		_putchar('\n');
		_putchar(' ');
		hauteur++;
	}
}
