#include "main.h"

/**
 * add_node - adds node to the list.
 * @head: pointer pointing to start of the list.
 * @str: string to be added to the list.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t l;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	newNode->len = l;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
