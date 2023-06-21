#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - prints every minutes in the day of jack bauer
 *Return: returns the printed result of jack_bauer
 */
void jack_bauer(void)
{
int seco;
int seco_;
int min;
int min_;
seco = 0;
seco_ = 0;
min = 0;
min_ = 0;
while (seco_ < 2)
{
while (seco < 9)
{
seco++;
if(seco == 9)
{
seco = 0;
seco_++;
}
}
}
return (0);
}
