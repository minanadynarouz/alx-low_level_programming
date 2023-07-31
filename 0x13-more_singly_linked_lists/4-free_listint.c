#include "lists.h"

/**
 * free_listint - free a sll.
 * @head: SLL.
 */

void free_listint(listint_t *head)
{
	listint_t *freeNode = head;
	listint_t *nextNode;

	while (freeNode != NULL)
	{
		nextNode = freeNode->next;
		free(freeNode);
		freeNode = nextNode;
	}
}
