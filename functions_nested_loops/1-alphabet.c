#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - where the program is
 * Return: Always 0 (Success)
 */
char print_alphabet(char al, int a)
{
a = 0;
al = 'a';
while (al <= 'z')
{
putchar(al);
al++;
}
return (al);
}
