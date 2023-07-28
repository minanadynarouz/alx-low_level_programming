#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the list.
 * Return: 0.
 */

void free_list(list_t *head)
{
	list_t *temp;
	temp = head;

	while (temp->next != NULL)
	{
		free(temp->str);
		free(temp);
	}
	free(head);
}
