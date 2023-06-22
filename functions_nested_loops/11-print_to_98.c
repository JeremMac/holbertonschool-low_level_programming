#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print all numbers to 98
 *Return: return value of n
 *@n: member of print_to_98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf(", ");
			n++;
			while (n >= 98)
			{
				printf("%d", n);
				n++;
			}
		}
	}
}
