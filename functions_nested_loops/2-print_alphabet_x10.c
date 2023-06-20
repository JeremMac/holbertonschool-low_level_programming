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
while (al <= 'z')
{
while(cnt <= 10)
{
putchar(al);
al++;
cnt++
}
}
putchar('\n')
return (al);
}
