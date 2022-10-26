#include "lists.h"
/**
*free_listint - frees a listint_t list.
*
*@head: list to be freed
*/
void free_listint(listint_t *head)
{

	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
