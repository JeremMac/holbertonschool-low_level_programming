#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * Return: Alaways 0 (Success)
 * char - type of *str
 * @str: member of _puts
 */
void _puts(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		_putchar(str[cnt]);
		str[cnt] = cnt + 1;
		str++;
	}
	_putchar('\n');
}
