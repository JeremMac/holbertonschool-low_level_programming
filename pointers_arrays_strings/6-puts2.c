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
	int ent;

	ent = 0;
	cnt = 0;

	while (str[ent] != '\0')
	{
		ent++;
	}
	ent--;
	while (cnt <= ent)
	{
		_putchar(str[cnt]);
		cnt = cnt + 2;	
	}
	_putchar('\n');
}
