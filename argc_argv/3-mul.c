#include <stdio.h>
#include <stdlib.h>
/**
 * main - a fonction to multiplie two numbers
 * @argc: number of arguments to my function
 * @argv: array containing arguments to my function
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int rslt;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	rslt = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", rslt);
	return(0);
}
