#include <stdio.h>
/**
 *main - contains my program
 *Return: Always 0 (Success)
 */
int main(void)
{
char al;
char AL;
for (al = 'a'; al < 'z'; al++)
{
putchar(al);
}
for (AL = 'A'; AL < 'Z'; AL++)
{
putchar(AL);
}
putchar('\n');
return (0);
}
