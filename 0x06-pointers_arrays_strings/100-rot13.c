#include "main.h"
/**
*rot13 - encodes with rot13
*
*@str: string parameter
*
*Return: encoded string
*/
char *rot13(char *str)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(letters + j) != '\0'; j++)
		{
			if (*(str + i) == *(letters + j))
			{
				*(str + i) = *(rot13 + j);
				break;
			}
		}
	}
	return (str);
}
