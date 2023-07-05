#include "main.h"
/**
 * _pow_recursion - raise a given number to the power of another given number
 * Return: the result of a raised number
 * @x: contains the number to be raised.
 * @y: contains the exponantial value
 * int - the type of the returned value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
