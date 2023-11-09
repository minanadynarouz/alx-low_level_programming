#include "lists.h"

/**
 * print_dlistint - func to traverse DLL.
 * @h: DLL
 * Return: count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t len = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		len++;
		head = head->next;
	}
	return (len);
}
