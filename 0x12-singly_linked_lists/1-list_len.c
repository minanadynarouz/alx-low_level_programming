#include "lists.h"
/**
 * list_len - return number of elements in list.
 * @h: list.
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
