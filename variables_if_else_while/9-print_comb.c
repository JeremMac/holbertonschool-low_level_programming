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
putchar(',');
putchar(' ');
putchar(a);
}
putchar('\n');
return (0);
}
