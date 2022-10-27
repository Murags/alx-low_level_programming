#include "lists.h"
/**
*print_listint -  prints all the elements of a listint_t list.
*
*@h: list of elements
*
*Return: NUmber of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current;

	if (h == NULL)
		return (0);

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		nodes++;
		current = current->next;
	}
	return (nodes);
}
