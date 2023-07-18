#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a given string of character
 * @name: the given string of character to be printed
 * @f: a pointer to the function to print name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
