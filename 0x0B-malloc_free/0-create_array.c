#include "main.h"
#include <stdlib.h>
/**
*create_array - creates an array of chars,
*and initializes it with a specific char.
*
*@size: size of array
*@c: character to initialize
*
*Return: pointer to array (success) else NULL
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	else if (size > 0)
	{
		ptr = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	else
	{
		return ('\0');
	}
}
