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
	int nb;
	int n;

	cnt = 0;
	numb = 0;
	nb = 0;

	while (str[cnt] != '\0')
	{
		cnt++;
		numb++;
		nb++;
	}
	cnt = cnt / 2;
	numb--;
	nb--;
	n = (nb - 1) / 2; 

	while (cnt <= numb)
	{
		_putchar(str[cnt]);
		cnt++;
	if (nb % 2 != 0)
	{
		while (n < numb)
		{
			_putchar(str[n++]);
			n++;
		}

	}
	}
	_putchar('\n');
}
