#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: the number of members in the array
 * @size: the type of the members of the array
 * Return: return the pointer to the created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ar;
	unsigned int idx2;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (idx2 = 0; idx2 < nmemb * size; idx2++)
	{
		ar[idx2] = 0;
	}

	return (ar);
}
