#include "lists.h"

/**
 * print_listint - prints all the elements of a sll.
 * @h: SLL.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t elem = 0;
	const listint_t *runner  = h;

	while (runner != NULL)
	{
		printf("%i\n", runner->n);
		elem += 1;
		runner = runner->next;
	}
	return (elem);
}
