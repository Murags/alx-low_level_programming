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
	int i, j, len, k, l, counter, boolean;

	for (len = 0; needle[len] != '\0'; len++)
	{
	}

	boolean = 1;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[j] == needle[i])
			{
				k = j;
				l = i;
				for (counter = 0; counter < len; counter++)
				{
					if (haystack[k] != needle[l])
					{
						break;
					}
					k++;
					l++;
				}
			}
		if (counter == len)
		{
			boolean = 0;
			break;
		}
		}
		if (boolean == 0)
		{
			break;
		}

	}
	return (haystack + j);
}
