#include <stdio.h>
/**
 *main - all is in here
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;
a = 0;
while (a <= 9)
{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
