#include "main.h"

/**
 * add_node - adds node to the list.
 * @head: pointer pointing to start of the list.
 * @str: string to be added to the list.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t l;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	
	for (l = 0; str[l] != '\0'; l++)
		;

	new->len = l;
	new->next = (*head);
	*head = new;

	return (*head);
}
