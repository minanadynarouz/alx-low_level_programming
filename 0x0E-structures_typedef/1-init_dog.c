#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a dog.
 * @d: structure of a dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
