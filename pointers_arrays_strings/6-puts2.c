#include "main.h"
/**
 * puts2 - prints characters followed by a new line
 * Return: Always 0 (Success)
 * char - type of *str
 * @str: member of puts2
 */
void puts2(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		_putchar(str[cnt] + '0');
		str++;
	}
	_putchar('\n');
}
