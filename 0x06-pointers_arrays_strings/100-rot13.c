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
	int i;
	char temp;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (*(str + i) > 'm')
			{
				temp = *(str + i) - 'm';
				*(str + i) = temp + 96;
			}
			else if (*(str + i) <= 'm')
			{
				*(str + i) += 13;
			}
		}

	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			if (*(str + i) > 'M')
			{
				temp = *(str + i) - 'M';
				*(str + i) = temp + 64;
			}
			else if (*(str + i) <= 'M')
			{
				*(str + i) += 13;
			}
		}
	}
	
	return (str);
}
