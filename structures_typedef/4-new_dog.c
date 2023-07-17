#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates
 * a new structure called dog
 * @name: a string that containe the name of
 * the dog
 * @age: a float value of the dog's age
 * @owner: astring containing the name
 * of the dog owner
 * Return: the new created structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	new_dog->name = malloc(sizeof(name));
	new_dog->owner = malloc(sizeof(owner));

	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
