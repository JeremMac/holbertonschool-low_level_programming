#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds positive numbers
 * @argc: number of argument passed to my function
 * @argv: array containing all the arguments passed to my function
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int rslt;
	int idx = 1;

	while (idx < argc)
	{
	rslt += atoi(argv[idx]);
		idx++;
	}
	while (idx < argc)
	{
		if (atoi(argv[idx]) < '0' || atoi(argv[idx]) > '9')
		{
			printf("Error\n");
			return (1);
		}
		idx++;
	}
	if (argc < 1)
	{
		printf("0\n");
	}
	printf("%d\n", rslt);
	return (0);
}
