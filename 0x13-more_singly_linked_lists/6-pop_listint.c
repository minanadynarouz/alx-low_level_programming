#include "lists.h"

/**
 * pop_listint - delete first node of the list.
 * @head: SLL.
 * Return: deleted node.
 */

int pop_listint(listint_t **head)
{
	int val_pop;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	val_pop = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (val_pop);
}
