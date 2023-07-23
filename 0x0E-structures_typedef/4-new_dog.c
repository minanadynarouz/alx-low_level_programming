#include <stdio.h>
#include "dog.h"

/**
 * length - function to get string len.
 * @str: var to check its len.
 * Return: length of str
 */

int length(char *str)
{
	int len = 0;
	while (str)
	{
		len++;
	}
	return (len);
}

/**
 * copy - func to copy str from src to dest.
 * @dest: destination var.
 * @src: source var.
 * Return: string copied.
 */

char *copy(char *dest, char *src)
{
	int i = 0;
	for ( ; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - initializes a dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of the dog.
 * Return: struct dog_t type dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	doggy = malloc(sizeof(dog_t));
	if(doggy == NULL)
	{
		return (NULL);
	}

	doggy->name = malloc(sizeof(char) * length(name) + 1);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * length(owner) + 1);
        if (doggy->owner == NULL)
        {
		free(doggy->name);
                free(doggy);
                return (NULL);
        }

	doggy->name = copy(doggy->name, name);
	doggy->age = age;
	doggy->owner = copy(doggy->owner, owner);

	return (doggy);
}
