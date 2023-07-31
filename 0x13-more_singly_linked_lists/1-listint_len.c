#include "lists.h"

/**
 * listint_len - provide number of elements in sll.
 * @h: SLL.
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
