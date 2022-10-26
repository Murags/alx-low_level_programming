#include "lists.h"
/**
*free_listint - frees a listint_t list.
*
*@head: list to be freed
*/
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);

		free(head);
	}
}
