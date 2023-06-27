#include "main.h"
/**
 * puts_half - prints half of the string
 * char - type of *str
 * @str: member of puts_half
 */
void puts_half(char *str)
{
	int cnt;
	int numb;

	cnt = 0;
	numb = 0;

	while (str[cnt] != 0)
	{
		cnt++;
		numb++;
	}
	cnt = cnt / 2;
	numb--;
	while (str[cnt] <= numb)
	{
		_putchar(str[cnt]);
		cnt++;
	}
}
