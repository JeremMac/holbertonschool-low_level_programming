#include "main.h"
/**
 * reverse_array - reverse the int in an array
 * @a: memeber of reverse_array
 * @n: member of reverse_array
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
