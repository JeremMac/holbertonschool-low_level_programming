#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - where the program is
 * Return: Always 0 (Success)
 */
char print_alphabet(void)
{
char al;
al = 'a';
while (al <= 'z')
{
putchar(al);
al++;
}
putchar('\n');
return (al);
}
