#include "lists.h"

/**
 * delete_nodeint_at_index - delete specific node at
 * mentioned index num.
 * @head: double pointer to SLL.
 * @index: index to delete from.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *run = *head;
	listint_t *deleteNode;
	unsigned int i;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && run != NULL; i++)
		{
			run = run->next;
		}
	}

	if (run == NULL || (run->next == NULL && index != 0))
		return (-1);

	deleteNode = run->next;

	if (index != 0)
	{
		run->next = deleteNode->next;
		free(deleteNode);
	}
	else
	{
		free(run);
		*head = deleteNode;
	}
	return (1);
}
