#include "lists.h"

/**
 * print_listint - prints all the elements of a sll.
 * @h: SLL.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tempList;
	unsigned int counter = 0;

	tempList = h;
	while (tempList)
	{
		printf("%d\n", tempList->n);
		counter++;
		tempList = tempList->next;
	}
	return (counter);
}
