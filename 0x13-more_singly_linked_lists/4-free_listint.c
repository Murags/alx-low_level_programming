#include "lists.h"
/**
*free_listint - frees a listint_t list.
*
*@head: list to be freed
*/
void free_listint(listint_t *head)
{

	listint_t *current;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
