#include "lists.h"
/**
*free_list - frees a list
*
*@head: list of elements
*/
void free_list(list_t *head)
{
	list_t *tmp;
	tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
