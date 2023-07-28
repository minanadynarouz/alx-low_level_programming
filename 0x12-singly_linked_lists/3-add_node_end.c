#include "lists.h"

/**
 * add_node_end - add new node to the end of list.
 * @head: head of the list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tempNode;
	size_t l;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	newNode->len = l;
	newNode->next = NULL;
	tempNode = *head;

	if (tempNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tempNode->next != NULL)
			tempNode = tempNode->next;
		tempNode->next = newNode;
	}

	return (*head);
}
