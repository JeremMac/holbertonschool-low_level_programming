#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a funtion to print the content
 * of struct dog
 * @d: a pointer to the struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	if (d->age == 0)
	{
		printf("(nil)\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
