#include "lists.h"

/**
 * find_listint_loop - function to find loop in list.
 * @head: pointing to start of list.
 * Return: address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	int diff;
	listint_t *temp;

	if (!head)
		return (0);

	while (head)
	{
		diff = head - head->next;
		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
			temp = *head;
			break;
		}
	}
	return (temp);
}
