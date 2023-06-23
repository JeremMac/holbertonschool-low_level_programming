#include "main.h"
/**
 * _isdigit - checks for a digit
 * Return: return 1 if c is a digit
 * @c: is a member of _isdigit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
