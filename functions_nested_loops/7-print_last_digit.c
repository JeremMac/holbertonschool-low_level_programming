#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - print a number's last digit
 *Return: return the last digit
 *int - type of n
 *@n: member of the function
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -1 * last_digit;
}
putchar(last_digit + '0');
return (last_digit);
}
