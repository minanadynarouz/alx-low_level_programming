#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog members.
 * @d: structure of a dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}

	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("nil\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
