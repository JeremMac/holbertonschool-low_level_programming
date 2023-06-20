*#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_islower - check lowercase character
 *Return: 1 if c is lowercase
 *@c: member of my function
 */
int _islower(int c)
{
if (islower(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
