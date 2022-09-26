#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring.
*
*@s: string the function is executed on
*@accept: acceptable characters
*
*Return: length of acceptable string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter, i, j;

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (counter);
			}
		}
		i++;
	}
	return (counter);
}
