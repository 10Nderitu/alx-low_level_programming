#include "lists.h"

/**
 * reee_lisint - frees a listint_t list
 * @head: pointer to the head of the list
 * Return: void
 * */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head-> next;
		free(temp);
	}
}
