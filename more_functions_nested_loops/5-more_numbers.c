#include "main.h"
/**
 * more_numbers - print numbers from  0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int cnt;
	int num;

	num = 0;

	while (cnt <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		cnt++;
	}
	_putchar('\n')
}
