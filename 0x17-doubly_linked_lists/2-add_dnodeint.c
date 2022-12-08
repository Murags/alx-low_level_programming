#include "lists.h"
/**
*add_dnodeint - Add node at begginning
*
*@head: pointer to list
*@n: node to add
*
*Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
