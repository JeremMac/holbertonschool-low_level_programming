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
	else if(c >= 32 && c < 65)
	{
		return (0);
	}
}
