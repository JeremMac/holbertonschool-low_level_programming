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
	}
	cnt / 2;
	while (str[numb] <= cnt)
	{
		_putchar(str[numb]);
		num++;
	}
	cnt++;
	_putchar('\n');
	while (str[cnt] <= num)
	{
		_putchar(str[cnt]);
		cnt++;
	}
}
