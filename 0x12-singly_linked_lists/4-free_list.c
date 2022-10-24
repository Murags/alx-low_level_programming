#include "lists.h"
/**
 * free_list - This function frees a list_t list
 * @head: The list to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
