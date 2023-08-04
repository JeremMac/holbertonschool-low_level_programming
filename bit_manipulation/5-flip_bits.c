#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that
 * the number of bits you would
 * needed to flip one number
 * to another
 * @n: the first number we flip
 * @m: the number n will be fliped with
 * Return: the int number of bits
 * required to flip n and m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
