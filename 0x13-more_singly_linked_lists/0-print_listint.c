#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: Pointer to the first node of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nod++;
		h = h->next;
	}

	return (nod);
}

