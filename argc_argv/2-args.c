#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: indicates the number of arguments
 * @argv: array containing the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int cnt = 0;

	while (cnt < argc)
	{
		printf("%s\n", argv[cnt]);
		cnt++;
	}
	return (0);
}
