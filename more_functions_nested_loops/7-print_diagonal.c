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
	int imp;

	imp = 0;
	hauteur = 0;
	longueur = 0;

	while (imp < n)
	{
	while (longueur < n)
	{
		_putchar(' ');
		longueur++;
	}
	while (hauteur < n)
	{
		_putchar('/n');
		hauteur++;
	}
	_putchar('\');
	imp++;
	}
}
