#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: Always 0 (Success)
 */
void print_numbers()
{
	int num;
	
	num = 0; 
	
	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar("\n");
}
