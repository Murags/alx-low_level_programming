#include "lists.h"
/**
*list_len - Counts number of elements in the list
*
*@h: pointer to the first element on the list
*
*Return: Number of elements in list
*/
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current;

	if (h == NULL)
		return (0);

	current = malloc(sizeof(list_t));

	if (current == NULL)
		return (0);

	current = h;
	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}

	return (nodes);
}
