#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	dog_t *other_dog;

	other_dog = malloc(sizeof(dog_t));

	if (other_dog == NULL)
	{
		return (NULL);
	}

	other_dog->name = malloc(sizeof(strlen(name)) + sizeof(char));

	if (other_dog->name == NULL)
	{
		free(other_dog);
		return (NULL);
	}

	other_dog->owner = malloc(sizeof(strlen(owner)) + sizeof(char));

	if (other_dog->owner == NULL)
	{
		free(other_dog->name);
		free(other_dog);
	}
	strcpy(other_dog->name, name);
	strcpy(other_dog->owner, owner);
	other_dog->age = age;

	return (other_dog);
}
