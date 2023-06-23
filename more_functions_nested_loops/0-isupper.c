#include "main.h"
/**
 * _isupper - check for upper case
 * Return: return 1 if uppercase
 * @c: is a member of _isupper
 */
int _isupper(int c)
{
	if (c >= 65)
	{
		return (1);
	}
	if((c >= 32 && c < 65) && (c <= 126 && c < 90))
	{
		return (0);
	}
	else
	{
		return(0);
	}
}
