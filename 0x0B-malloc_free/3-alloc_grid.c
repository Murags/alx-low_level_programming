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

	ptr2 = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		ptr2[i] = innerarr(width);
	}
	return (ptr2);
}
