#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minutes of jack bauer's day
 * Return: retursn a counter
 */
void jack_bauer(void)
{
int min_;
int min;
int sec_;
int sec;
min_ = 0;
min = 0;
sec_ = 0;
sec = 0;
while (min_ <= 2 && min < 3)
{
while (sec_ <= 9)
{
sec_++;
if (sec_ == 9)
{
sec++;
sec_ = 0;
}
if (sec == 6)
{
min++;
sec = 0;
}
if (min == 9)
{
min_++;
min = 0;
}
_putchar(min_);
_putchar(min);
_putchar(':');
_putchar(sec_);
_putchar(sec);
}
}
return (0);
}
