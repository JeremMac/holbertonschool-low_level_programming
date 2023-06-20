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
last_digit = n % 'a';
return (last_digit);
}
