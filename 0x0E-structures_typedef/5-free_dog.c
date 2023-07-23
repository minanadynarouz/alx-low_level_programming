#include "dog.h"

/**
 * free_dog - function to free dog struct
 * @d: is the struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
