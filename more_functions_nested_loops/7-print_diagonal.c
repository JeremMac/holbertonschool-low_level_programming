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

	longueur = 0;
	hauteur = 0;

	while (hauteur < n)
	{
		while (longueur < n)
		{
		_putchar(' ');
		longueur++;
		}
		_putchar('\\');
		_putchar('\n');
		hauteur++;
	}
}
