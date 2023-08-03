#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *runner = h;
	size_t count = 0;
	
	while (runner != NULL)
	{
		printf("%d\n", runner->n);
		count += 1;
		runner = runner->next;
	}
	return (count);
}
