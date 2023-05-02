#include "lists.h"

/**
 * listint_len - Return the number of elements in a listint_t list
 * @h: Pointer to the first node of the list
 *
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}

	return (nod);
}

