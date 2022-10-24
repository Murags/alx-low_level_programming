#include "lists.h"
/**
*free_list - frees a list
*
*@head: list of elements
*/
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
