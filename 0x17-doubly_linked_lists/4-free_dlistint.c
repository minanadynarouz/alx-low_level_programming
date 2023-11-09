#include "lists.h"

/**
 * free_dlistint - func to free DLL.
 * @head: DLL
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
