#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - a function that return
 * operator we need and the function to use it
 * @s: a pointer to a string a
 * that contain the operator
 * for our main function
 * Return: NULL if ops s is NULL
 * ops if ops[i] == s
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
