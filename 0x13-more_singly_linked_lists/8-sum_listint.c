#include "lists.h"

/**
 * sum_listint - calculate sum in all nth elements
 * in single linked list.
 * @head: SLL.
 * Return: sum of elements.
 */

int sum_listint(listint_t *head)
{
	listint_t *runner = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (runner != NULL)
	{
		sum += runner->n;
		runner = runner->next;
	}
	return (sum);
}
