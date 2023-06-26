#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * Return: Alaways 0 (Success)
 * char - type of *str
 * @str: member of _puts
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str[cnt] = cnt + 1; 
		*str++;
	}
	_putchar('\n');
}
