#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: Double pointer to linked list.
 * Return: a pointer to the first node of
 * the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *nextNode;

	while (current != NULL)
	{
		nextNode = current->next;
		current->next = prev;
		prev = current;
		current = nextNode;
	}
	*head = prev;
	
	return (*head);
}
