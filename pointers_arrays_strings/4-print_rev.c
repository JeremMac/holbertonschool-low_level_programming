#include "main.h"
/**
 * print_rev - prints a string in reverse
 * Return: Always 0 (Success)
 * char - type of *s
 * @s: member of print_rev
 */
void print_rev(char *s)
{
	int cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if(s[cnt] == '\0')
		{
			while (*s <= 0)
			{
				_putchar(str[cnt]);
				s--;
			}
		}
		s++;
	}
}
