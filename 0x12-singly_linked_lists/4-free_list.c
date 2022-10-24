#include "lists.h"

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
