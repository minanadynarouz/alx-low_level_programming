#include "lists.h"

/**
 * get_nodeint_at_index - provide node at specific index.
 * @head: SLL.
 * @index: index to look for node data.
 * Return: Node data found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *runner;
	unsigned int counter = 0;

	runner = head;

	while (runner != NULL)
	{
		if (counter == index)
		{
			return (runner);
		}
		runner = runner->next;
		counter++;
	}
	return (NULL);
}
