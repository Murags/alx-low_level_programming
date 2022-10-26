#include "lists.h"
/**
*add_nodeint - adds an element at the beginning
*
*@head: pointer to list
*@n:element to be added
*
*Return: new element address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
