#include "lists.h"
void pop_list(listint_t **head);
/**
*delete_nodeint_at_index - deletes node at a specific index
*
*@head: pointer to list
*@index: node to delete
*
*Return: 1 success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *remove, *temp;
	unsigned int i = 0;

	if (head == NULL && index == '\0' && *head == NULL)
		return (-1);

	if (index == 0)
	{
		pop_list(head);
		return (1);
	}
	else
	{
		temp = *head;
		while (temp != NULL && i < (index - 1))
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL || (temp->next == NULL && index != 0))
			return (-1);

		remove = temp->next;
		temp->next = remove->next;
		free(remove);

		return (1);
	}
	return (-1);
}
/**
*pop_list - removes first element of list
*
*@head: pointer to list
*/
void pop_list(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	temp = *head;
	*head = temp->next;
	free(temp);
}
