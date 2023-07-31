#include "lists.h"

/**
 * free_listint2 - function to free list.
 * @head: pointing to start of list.
 */

void free_listint2(listint_t **head)
{
	listint_t *freeNode = *head;
	listint_t *nextNode;

	while (freeNode != NULL)
	{
		nextNode = freeNode->next;
		free(freeNode);
		freeNode = nextNode;
	}
	*head = NULL;
}
