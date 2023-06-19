#include <stdio.h>
/**
 *main - the program is in here
 *Return: Always 0 (Success)
 */
int main(void)
{
char al;
for (al = 'a'; al <= 'z'; al++)
{
putchar(al);
if (al == 'q' || al == 'e')
{
putchar(' ');
}
}
return (0);
}
