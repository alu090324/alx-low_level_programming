#ifndef DOG_H
#define DOG_H

/**
 *struct dog- variable to be initialised
 *@name: variable to initialise
 *@age: variable to initialise
 *@owner:variable to initialise
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t- typedef of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
