#include "lists.h"
/**
*sum_listint - sum list of integers
*
*@head: list of integers
*
*Return: sum of integers
*/
int sum_listint(listint_t *head)
{
	int output = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		output += head->n;
		head = head->next;
	}
	return (output);
}
