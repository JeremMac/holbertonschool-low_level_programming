#include <stdio.h>
#include "main.h"
/**
 *print_sign - prints the sign of a number
 *Return: return 1 or -1 if the number is not zero
 *@n: member of print_sign
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
if (n == 0)
{
putchar('0');
return (0);
}
if (n < 0)
{
putchar('-');
return (-1);
}
}
