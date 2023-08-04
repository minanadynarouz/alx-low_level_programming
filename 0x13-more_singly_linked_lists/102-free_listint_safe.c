#include "lists.h"

/**
 * free_listint2 - function to free list.
 * @head: pointing to start of list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t num = 0;
	long int diff;

	if (!*h || !h)
	{
		return (0);
	}
	
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			num++;
		}
		else
		{
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;
	return (num);
}
