#include "lists.h"
/**
*reverse_listint - function that reverses a listint_t linked list
*
*@head: first element of a list
*
*Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *rev;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = current;
	}
	*head = rev;
	return (*head);
}
