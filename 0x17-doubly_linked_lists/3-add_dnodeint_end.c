#include "lists.h"
/**
*add_dnodeint_end - adds node at end of list
*
*@head: pointer to list
*@n: node to add
*
*Return: node added
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;

	current->next = new;
	new->prev = current;
	new->next = NULL;

	return (new);
}
