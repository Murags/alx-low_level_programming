#include "lists.h"
/**
*insert_nodeint_at_index -  inserts a new node at a given position.
*
*@head: pointer list
*@idx: index to insert at
*@n: element to insert
*
*Return: address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	temp = *head;

	if (head == NULL && idx == '\0')
		return (NULL);

	while (i < (idx - 1) && temp)
	{
		temp = temp->next;
		i++;
	}
	if (i >= idx)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;

	temp->next = new;

	return (new);
}
