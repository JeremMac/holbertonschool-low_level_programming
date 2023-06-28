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
	int n;
	int nom;

	cnt = 0;
	numb = 0;

	while (str[cnt] != '\0')
	{
		cnt++;
		numb++;
		nom++;
	}
	cnt = cnt / 2;
	numb--;
	nom--;
	while (cnt <= numb)
	{
		_putchar(str[cnt]);
		cnt++;
	}
	if (nom % 2 != 0)
	{
		numb++;
		n = nom--;
		n = n / 2;
		while (n < numb)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
