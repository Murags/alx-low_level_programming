#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *remove, *temp;
	unsigned int i = 0;

	temp = *head;

	if (index == 0)
	{
		remove = temp;
		temp = remove->next;

		free(remove);
	}
	while (temp != NULL && i < (index - 1) )
	{
		temp = temp->next;
		i++;
	}

	remove = temp->next;
	temp->next = remove->next;

	free(remove);
	return (1);
}
