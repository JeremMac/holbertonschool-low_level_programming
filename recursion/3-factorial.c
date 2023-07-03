#include "main.h"
/**
 * factorial - give the factorial of a given number
 * int - indicate that n is an integer
 * @n: the number the function will calculte into factorial
 * Return: - 1 if n < 0, 1 if n = 1 or 0 or the factorila of any numbers
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return n * factorial(n - 1);
}
