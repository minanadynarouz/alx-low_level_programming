#include "lists.h"

/**
 * add_node_end - add new node to the end of list.
 * @head: head of the list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t l;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	for (l = 0; str[l] != '\0'; l++)
		;

	newNode->len = l;
	newNode->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = newNode;
	}
	else
	{
		list_t *temp = (*head);
		while ((temp)->next != NULL)
		{
			temp = (temp)->next;
		}
		(temp)->next = newNode;
	}
	return (*head);
}
