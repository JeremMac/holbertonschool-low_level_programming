#include "main.h"
/**
 * print_rev - prints a string in reverse
 * Return: Always 0 (Success)
 * char - type of *s
 * @s: member of print_rev
 */
void print_rev(char *s)
{
	int *a;
	int cnt;

	cnt = 0;
	for (a = 0; *s != '\0'; a++)
	{
		_putchar(s[cnt]);
		cnt++;
		s++;
	}
}
