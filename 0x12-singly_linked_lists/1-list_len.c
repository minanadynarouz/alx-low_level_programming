#include "main.h"

/**
 * list_len - provide num of elements in list.
 * @h: list.
 * Return: qty of elements.
 */

size_t list_len(const list_t *h)
{
	size_t ele;
	
	ele = 0;
	while (h != NULL)
	{
		h = h->next;
		ele++;
	}
	return (ele);
}
