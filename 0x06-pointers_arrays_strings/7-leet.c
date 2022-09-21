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
	int i, j;

	char arr[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = arr[j];
			}
		}
	}
	return (str);

}
