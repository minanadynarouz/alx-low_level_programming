#include "lists.h"

/**
 * dlistint_len - func to provide num of elements in DLL.
 * @h: DLL
 * Return: count of elements
 */

size_t dlistint_len(const dlistint_t *h);
{
	const dlistint_t *head = h;
	size_t len = 0;

	while (head != NULL)
	{
		len++;
		head = head->next;
	}
	return (len);
}
