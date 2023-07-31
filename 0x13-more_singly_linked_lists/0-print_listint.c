#include "lists.h"

/**
 * print_listint - prints all the elements of a sll.
 * @h: SLL.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		printf("", h->n);
		h = h->next;
	}
	return (elem);
}
