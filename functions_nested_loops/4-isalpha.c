#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: 1 c is a letter
 * @c: is a member of _isalpha
 */
int _isalpha(int c)
{
if (isalpha(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
