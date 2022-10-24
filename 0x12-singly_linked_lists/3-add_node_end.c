#include "lists.h"
#include <string.h>
/**
*add_node_end - adds element at the end of list
*
*@head: list to add the element
*@str: element to add
*
*Return: address of the added element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;

	tmp = *head;
	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (tmp == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = ptr;

	return (ptr);
}
