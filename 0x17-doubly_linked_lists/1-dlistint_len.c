#include "lists.h"
/**
*dlistint_len - Counts number of nodes
*
*@h: pointer to list
*
*Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
