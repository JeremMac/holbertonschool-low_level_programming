#include "main.h"
/**
 * rev_string - reverse the content of a string
 * Return: Always 0 (Success)
 * char - type of *s
 * @s: memeber of rev_string
 */
void rev_string(char *s)
{
	int rev;
	int len;
	int ver;
	char temp;

	len = 0;
	rev = 0;
	
	while (s[len] != 0)
	{
		len++;
	}
	for (rev = len - 1; ver < rev; ver++ rev--)
	{
		temp = s[rev];
		s[ver] = s[rev];
		s[rev] = temp;
	}
}
