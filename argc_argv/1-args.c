#include <stdio.h>
/**
 * main - a function that prints the number
 * of arguments passed into it
 * @argc: int number of arguments into the function
 * @argv: string arguments of the function
 * Return: always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
