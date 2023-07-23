#ifndef dog_H
#define dog_H

#include <stdio.h>

/**
 * struct dog - a new data structure defines a dog.
 * @name: name of dog
 * @age: Dog's age.
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
