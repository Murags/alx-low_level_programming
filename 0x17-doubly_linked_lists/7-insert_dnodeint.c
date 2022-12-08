#include "lists.h"
/**
*insert_dnodeint_at_index - insert node at index
*
*@h: pointer to list
*@idx: index to insert at
*@n: element to add
*
*Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	if (i == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	temp = *h;
	i = 0;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	while (temp)
	{
		if (idx == i)
		{
			temp->prev->next = new;
			new->prev = temp->prev;
			temp->prev = new;
			new->next = temp;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
