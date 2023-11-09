#include "lists.h"

/**
 * sum_dlistint - func to get sum of all node's data.
 * @head: DLL.
 * Return: the sum of all nodes.
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
