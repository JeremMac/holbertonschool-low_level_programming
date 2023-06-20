#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - where the program is
 * Return: Always 0 (Success)
 */
char print_alphabet_x10(void)
{
char al;
int cnt;
al = 'a';
cnt = 1;
while (cnt <= 10)
{
while (al <= 'z')
{
putchar(al);
al++;
}
putchar(al);
putchar('\n');
cnt++;
}
return (al);
}
