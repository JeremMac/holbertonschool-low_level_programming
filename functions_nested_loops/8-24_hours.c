#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minutes of jack bauer's day
 * Return: retursn a counter
 */
void jack_bauer(void)
{
int compt;
int min_;
int min;
int sec_;
int sec;compt = 0;
min_ = 48;
min = 0;
sec_ = 0;
sec = 0;
while (compt <= 1439)
{
while (sec_ <= 9)
{
sec_++;
if (sec_ == 10)
{
sec++;
sec_ = 0;
}
if (sec == 6)
{
min++;
sec = 0;
}
if (min == 10)
{
min_++;
min = 0;
}
_putchar(min_);
_putchar(min + '0');
_putchar(':');
_putchar(sec + '0');
_putchar(sec_ + '0');
_putchar('\n');
}
compt++;
}
}
}
