#include "main.h"
#include <stdlib.h>
/**
*innerarr - adds element to the inner arrays
*
*@width: size of the array
*
*Return: array pointer
*/
int *innerarr(int width)
{
	int j, *ptr1;

	ptr1 = malloc(sizeof(int) * width);
	if (ptr1 == NULL)
	{
		free(ptr1);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		ptr1[j] = 0;
	}
	return (ptr1);
}
/**
*alloc_grid - function that returns a pointer
*to a 2 dimensional array of integers.
*
*@width: size of the inner array
*@height: size of outer array
*
*Return: pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
	int **ptr2, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr2 = malloc(sizeof(int) * height);
	if (ptr2 == NULL)
	{
		free(ptr2);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr2[i] = innerarr(width);
		if (ptr2[i] == NULL)
		{
			free(ptr2);
		}
	}
	return (ptr2);
}
