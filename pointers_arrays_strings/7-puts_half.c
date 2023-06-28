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
	int chips;

	cnt = 0;
	numb = 0;
	chips = 0;

	while (str[cnt] != '\0')
	{
		cnt++;
		numb++;
		nom++;
	}
	cnt = cnt / 2;
	nom--;
	numb--;
	{
		while (cnt <= numb)
		{
			_putchar(str[cnt]);
			cnt++;
		}
	if (numb % 2 != 0)
	{
		n = nom--;
		n = n / 2;
		while (chips < n)
		{
			_putchar(str[chips]);
			chips++;
		}
	}
	_putchar('\n');
}
