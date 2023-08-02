#include "lists.h"

/**
 * insert_nodeint_at_index - add item at specific
 * index location.
 * @head: double pointer to head pointer.
 * @idx: index where to place the new item.
 * @n: value of node to be inserted.
 * Return: pointer to head.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *run1 = *head;
	listint_t *run2 = *head;
	listint_t *newNode;
	unsignd int count = -1;

	while (run1 != NULL)
	{
		count++;
		run1 = run1->next;
	}

	if (count == -1 && idx > 0)
	{
		return (NULL);
	}

	if (count > -1 && (idx <= count || idx == count + 1))
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
		{
			return (NULL);
		}

		 
	}

}
