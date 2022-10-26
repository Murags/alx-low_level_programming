#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int output;

	if (head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (0);

	temp = *head;

	output = temp->n;

	*head = temp->next;
	free(temp);

	return (output);
}
