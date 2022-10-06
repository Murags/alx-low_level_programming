#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - function that concatenates two strings.
*
*@s1: string one to be concatenated with string 2
*@s2: string two to be concatenated with string 1
*@n: number of bytes from s2 to be concatenated
*
*Return: concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, j = 0, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; *(s1 + s1len) != '\0'; s1len++)
	{
	}
	for (s2len = 0; *(s2 + s2len) != '\0'; s2len++)
	{
	}

	if (n >= s2len)
		n = s2len;

	concat = malloc(sizeof(char) * (s1len + n + 1));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0; i < (s1len + n); i++)
	{
		if (i >= s1len)
		{
			concat[i] = s2[j];
			j++;
		}
		else if (i < s1len)
		{
			concat[i] = s1[i];
		}
	}
	return (concat);
}
