#include "lists.h"
/**
* get_dnodeint_at_index - get node at index
*
*@head: list to search
*@index: index to get
*
*Return: node at index else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
