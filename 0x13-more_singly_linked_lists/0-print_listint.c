#include "lists.h"

/**
 * print_listint - prints all the elements of a sll.
 * @h: SLL.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
