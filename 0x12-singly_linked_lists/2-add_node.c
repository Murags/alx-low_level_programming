#include "lists.h"
#include <string.h>
/**
*add_node - Adds element to the beginning of the list
*
*@head: pointer to address of the list
*@str: element to be added
*
*Return: address of new element else NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
