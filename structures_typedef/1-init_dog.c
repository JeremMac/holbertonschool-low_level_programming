#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialise
 * a variable of type struct dog
 * @d: pointer to my_dog
 * @name: name of a dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return : nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
