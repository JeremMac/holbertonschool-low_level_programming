#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - a function that add two integers
 * @a: first integer to be added
 * @b second integer to be added
 * Return: the sum of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that sub two a - b
 * @a: the first int to the substraction
 * @b: the second int to the substraction
 * Return: the substraction of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a funtion that multiplie two integers
 * @a: the first int to be multiplied
 * @b: the second int to be multiplied
 * Return: the result of a times b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to divise two integer
 * @a: the first int to divise
 * @b: the second int to divise
 * Return: return a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function to return the modulo
 * of two integers
 * @a: the first integer to calculate
 * @b: the second integer to calculate
 * Return:
 */

int op_mod(int a, int b)
{

	return (a % b);
}
