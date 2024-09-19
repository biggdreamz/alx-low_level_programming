#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
