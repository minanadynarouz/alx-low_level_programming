#include "lists.h"

/**
 * free_dlistint - func to free DLL.
 * @head: DLL
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head->next);
		free(head->prev);
	}
	free(head);
}
