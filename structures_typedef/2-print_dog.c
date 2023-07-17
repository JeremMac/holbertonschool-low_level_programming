#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	if (d->age == 0)
	{
		printf("(nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
