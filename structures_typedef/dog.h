#ifndef __DOG__H__
#define  __DOG__H__
/**
 * struct dog - a structure to manipulate
 * the name and age of a dog and
 * the name of their owner
 * @name: a string containing the name of the dog
 * @age: a float value that indicate the age
 * of the dog
 * @owner: a string containing the name
 * of the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
