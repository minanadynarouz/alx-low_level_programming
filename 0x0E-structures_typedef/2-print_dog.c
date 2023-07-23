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
	
	printf("Name: %s\n", d->name ? d->name: "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d-owner ? d-owner: "(nil)");
}	
