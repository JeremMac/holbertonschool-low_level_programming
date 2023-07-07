#include <stdio.h>
/**
 * main - a program who returns its own name
 * @argc: an int number of arguments
 * @argv: an array containing the strings of arguments
 * Return: always 0 (success)
 */
int main(int  __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
