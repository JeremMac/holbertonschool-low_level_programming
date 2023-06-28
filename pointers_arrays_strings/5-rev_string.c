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
	int len;

	cnt = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= cnt)
	{
		_putchar(s[len]);
		len--;
	}
}
