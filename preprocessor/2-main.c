#include <stdio.h>
/**
 * main - a function that prints the name
 * of the file the program
 * was compiled from
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
