#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - all the program is in there
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_digit;
last_digit = n % 10;
if (last_digit > 5)
{
printf("last digit of %d is %d and is greater that 5\n", n, last_digit);
}
if (last_digit == 0)
{
printf("last digit of %d is %d and is 0", n, last_digit);
}
if (last_digit < 6 && last_digit != 0)
{
printf("last digit of %d is %d and is less than 6 ans not 0", n, last_digit);
}
return (0);
}
