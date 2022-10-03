#include "main.h"
#include <stdlib.h>
/**
*_strdup -  returns a pointer to a newly allocated space in
*memory, which contains a copy of the string given as a parameter.
*
*@str: pointer to string to copy
*
*Return: pointer to copied string (success) else NULL
*/
char *_strdup(char *str)
{
	int len, i;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; *(str + len) != '\0'; len++)
	{
	}
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
