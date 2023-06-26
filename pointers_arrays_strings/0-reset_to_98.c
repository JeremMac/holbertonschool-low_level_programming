#include "main.h"
/**
 * reset_to_98 - changes the value of n to 98
 * Return: Always 0 (Success)
 * int - the type of n
 * @*n: member of reset_to_98
 */
void reset_to_98(int *n)
{
	int reset;

	reset = 98;
	n = &reset;
	_putchar(&reset + '0');
}
