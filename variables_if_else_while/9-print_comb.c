#include <stdio.h>
/**
 *main - all is in here
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (a = 0; a <= 8; a++)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
