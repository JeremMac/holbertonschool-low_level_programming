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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
