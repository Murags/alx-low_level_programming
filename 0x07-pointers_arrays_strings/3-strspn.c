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
	unsigned int counter;
	int i = 0, j = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}
