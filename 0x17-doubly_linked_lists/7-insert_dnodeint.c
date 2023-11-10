#include "lists.h"

/**
 * insert_dnodeint_at_index - func to insert node at specific index.
 * @h: DLL
 * @idx: Index to insert value at.
 * @n: DLL data value
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    if (!h) return NULL; // Handle invalid input

    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (!new_node) return NULL; // Check for memory allocation failure

    new_node->n = n;
    new_node->next = new_node->prev = NULL;

    if (!*h || idx == 0) {
        // Insert at the beginning if the list is empty or at the specified index
        new_node->next = *h;
        if (*h) (*h)->prev = new_node;
        *h = new_node;
        return *h;
    }

    dlistint_t *current = *h;
    unsigned int i = 0;

    while (current && i < idx - 1) {
        current = current->next;
        i++;
    }

    if (!current) {
        free(new_node);
        return NULL; // Index out of bounds
    }

    new_node->next = current->next;
    current->next = new_node;
    new_node->prev = current;

    if (new_node->next) {
        new_node->next->prev = new_node;
    }

    return *h;
}

