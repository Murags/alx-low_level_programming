#include "main.h"
/**
*_strstr - function finds the first occurrence of the
*substring needle in the string haystack
*
*@haystack: string to search
*@needle: substring
*
*Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, len, k, counter;

	for (len = 0; needle[len] != '\0'; len++)
	{
	}


	for (j = 0; haystack[j] != '\0'; j++)
	{
			i = 0;
			if (haystack[j] == needle[i])
			{
				k = j;
				for (counter = 0; counter < len; counter++)
				{
					if (haystack[k] != needle[i])
					{
						break;
					}
					k++;
					i++;
				}
			}
		if (counter == len)
		{
			break;
		}

	}
	return (haystack + j);
}
