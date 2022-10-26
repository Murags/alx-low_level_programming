#include "lists.h"
/**
*listint_len - Counts number of elements in list
*
*@h: List containing the elements
*
*Return: number of elements in list
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current;

	if (h == NULL)
		return (0);

	current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (0);

	current = h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}
