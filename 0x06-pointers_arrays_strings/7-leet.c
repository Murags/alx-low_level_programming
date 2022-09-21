#include "main.h"
/**
*leet - encodes a string into 1337.
*
*@str: string parameter
*
*Return: encoded string
*/
char *leet(char *str)
{
	int arr[10] = {4, 3, 7, 0, 1, 4, 3, 7, 0, 1}, i, j;
	int let[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (*(str + i) == let[j])
			{
				*(str + i) = arr[j];
			}
		}
	}
	return (str);

}
