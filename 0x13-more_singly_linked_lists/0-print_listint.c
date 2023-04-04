#include "lists.h"
#include <stdio.h>

/**
 * print listint - print list
 * @h: linked list
 * Return: node
 */

size_t print_listint(const listint_t *h)

{
	size_t nodes = 0;

	while (h)

	{
		printf("%d\n", h->n);
		nodes++;
		h = h ->next;
	}

	return (nodes);
}