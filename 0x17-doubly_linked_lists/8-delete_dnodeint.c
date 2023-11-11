#include "lists.h"

/**
 * dllist_len - func to provide num of elements in DLL.
 * @h: DLL
 * Return: count of elements
 */

unsigned int dllist_len(dlistint_t *h)
{
	dlistint_t *head = h;
	size_t len = 0;

	while (head != NULL)
	{
		len++;
		head = head->next;
	}
	return (len);
}

/**
 * delete_dnodeint_at_index - delete node a specific spot
 * @head: pointer to first node on list
 * @index: position to delete
 * Return: 1 if successful, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *pre_current = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			break;
		pre_current = current;
		current = current->next;
		i++;
	}


	pre_current->next = current->next;
	if (current->next)
		current->next->prev = pre_current;

	free(current);
	return (1);
}
