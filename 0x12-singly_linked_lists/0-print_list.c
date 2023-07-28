#include "lists.h"

/**
 * print_list - function to print list
 * @h: type linked list var to be printed.
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t ele;
	ele = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		ele++;
	}
	return (ele);
}
