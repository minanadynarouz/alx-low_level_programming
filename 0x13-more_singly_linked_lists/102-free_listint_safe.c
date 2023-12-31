#include "lists.h"

/**
 * free_listint_safe - function to free list.
 * @h: pointing to start of list.
 * Return: length of nodes.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}
	free(temp);
	*h = NULL;
	return (len);
}
