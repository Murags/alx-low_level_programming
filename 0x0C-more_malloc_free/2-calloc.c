#include "main.h"
#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array, using malloc.
*
*@nmemb: number of elements in the array
*@size: size of one array element
*
*Return: pointer to memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}

	return (mem);
}
