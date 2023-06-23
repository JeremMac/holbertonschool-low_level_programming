#include "main.h"
/**
 * print_line - print a straight line on the screen
 * Return: nothing
 *@n: member of print_line
 * int - parameter of print_line
 */ 
void print_line(int n)
{
	int a;

	a = 0;
	while (a <= n)
	{
		_putchar('_');
		if(n <= 0)
		{
			putchar('\n');
		}
		a++;
	}
	_putchar('\n');
}
