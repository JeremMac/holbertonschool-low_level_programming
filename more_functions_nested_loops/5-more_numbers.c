#include "main.h"
/**
 * more_numbers - print numbers from  0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int cnt;
	int num;
	int cont;
	int nim;

	cnt = 0;
	cont = 0;
	num = 0;
	nim =0;

	while (cnt <= 10)
	{
		while (cont <= 9)
		{
			if (num == 9)
			{
				num = 1;
				while (nim <= 4)
				{
					_putchar(num + '0');
					_putchar(nim + '0');
					nim++;
				}
			}
			num++;
			cont++;
		}
		cnt++;
		_putchar('\n');
	}
}
