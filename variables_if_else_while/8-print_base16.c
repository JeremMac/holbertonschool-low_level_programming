#include <stdio.h>
/**
 * main - all the program is here
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
char al;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (al = 'A'; al <= 'F'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
