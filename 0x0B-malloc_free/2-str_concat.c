#include "main.h"
#include <stdlib.h>
/**
*str_concat - function that concatenates two strings.
*
*@s1: string to append to
*@s2: string to be appended
*
*Return:concatenated string (success)
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2, i, j = 0;

	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	for (len1 = 0; *(s1 + len1); len1++)

	for (len2 = 0; *(s2 + len2); len2++)

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			*(concat + i) = *(s1 + i);
		}
		else
		{
			*(concat + i) = *(s2 + j);
			j++;
		}
	}
	*(concat + i) = '\0';
	s1 = concat;
	return (s1);
}
