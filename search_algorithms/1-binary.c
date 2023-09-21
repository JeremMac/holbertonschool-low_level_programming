#include "search_algos.h"

/**
 * binary_search - A function
 * that searches for a value
 * in a sorted array of integers
 * using the Binary search algorithm.
 * @array: A pointer to the first
 * element of the array to search in.
 * @size: The number of elements in array.
 * @value: Is the value to search for.
 * Return: return the searched value
 * otherwise return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t mid = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
