#include "main.h"
/**
 * sqrt2 - a secondary funtion to assist _sqrt_recursion
 * int - the type that should be returned
 * Return: return the square root of n
 * @rt: the root we want to obtain
 * @numb: the number we want to find the square root of in the function
 */
int sqrt2(int numb, int rt);

int sqrt2(int numb, int rt)
{
	if ((rt * rt) == numb)
	{
		return (rt);
	}

	if (rt == numb / 2)
	{
		return (-1);
	}

	return (sqrt2(numb, rt + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * sqrt2 - a secondary funtion to assist _sqrt_recursion
 * @n: the number the function will find the square root of
 * Return: the result found by sqrt2
 */

int _sqrt_recursion(int n)
{


	int rt = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sqrt2(n, rt));

}
