#include "lists.h"
/**
*print_list - prints list provided
*
*@h: pointer to first element on the list
*
*Return: number of elements printed
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *current = NULL;

	if (h == NULL)
		return (-1);

	current = malloc(sizeof(list_t));

	if (current == NULL)
	{
		free(current);
		return (-1);
	}

	current->str = h->str;
	current->len = h->len;
	current->next = h->next;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		count++;
	}
	return (count);
}
