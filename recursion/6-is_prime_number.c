#include "main.h"

int checks_prime(int numb, int sep);

/**
 * checks_prime - checks if the number is divisible
 * int - type return by the function
 * @numb: the number we need to check
 * @sep: the number we use to divise numb with
 * Return: 0 if numb is odd or 1 = numb / 2
 */
int checks_prime(int numb, int sep)
{
	if (numb % sep == 0)
		return (0);

	if (sep == numb / 2)
		return (1);

	return (checks_prime(numb, sep + 1));
}

/**
 * is_prime_number - returns 1 if a number is a prime number
 * int - the type the function returns
 * @n: a given number that is_prime_number will test
 * Return: return 1 if n is a prime number otherwise will return 0
 */
int is_prime_number(int n)
{
	int sep = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (checks_prime(n, sep));
}
