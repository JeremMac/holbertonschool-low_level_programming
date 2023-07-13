#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *ar;
	unsigned int idx2;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * sizeof(size));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (idx2 = 0; idx2 < nmemb; idx2++)
	{
		ar[idx2] = 0;
	}
	return (ar);
}
