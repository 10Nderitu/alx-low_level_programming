#include "lists.h"

/*
 * pop_listint - deltes the head node of a listint_t linked list and returns the head nodes data
 * @head: double pointer to the head of the list
 * Return: the head nodes data or 0 if the list is empty
 * */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
