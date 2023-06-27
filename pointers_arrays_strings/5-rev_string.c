#include "main.h"
/**
 * rev_string - reverse the content of a string
 * Return: Always 0 (Success)
 * char - type of *s
 * @s: memeber of rev_string
 */
void rev_string(char *s)
{
	int cnt;

	cnt = 0;

	while (s[cnt] != '\0')
	{
		cnt--;
	}
	while (s[cnt] >= 0)
	{
		_putchar(cnt);
		cnt++;
	}
}
