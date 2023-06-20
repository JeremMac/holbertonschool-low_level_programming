#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - where the program is
 * Return: Always 0 (Success)
 */
char print_alphabet(void)
{
al = 'a';
while (al <= 'z')
{
putchar(al);
al++;
}
return (al);
}
