#ifndef dog_H
#define dog_H

#include <stdio.h>
#include <stdlib.h>

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

/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
