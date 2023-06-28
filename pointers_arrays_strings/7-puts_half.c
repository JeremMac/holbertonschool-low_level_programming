#include "main.h"
/**
 * puts_half - prints half of the string
 * char - type of *str
 * @str: member of puts_half
 */
void puts_half(char *str)
{
	int len = 0;
	int hal = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	hal = len / 2;
	if (len % 2 == 0)
	{
		while(hal < len)
		{
			_putchar(str[hal]);
			hal++;
		}
	}
	if (len % 2 == 1)
	{
		hal = (len + 1) / 2;
		while(hal < len)
		{
			_putchar(str[hal]);
			hal++;
		}
	}
	_putchar('\n');
}
