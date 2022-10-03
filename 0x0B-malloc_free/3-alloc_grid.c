#include "main.h"
#include <stdlib.h>
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
	int **ptr2, i, j;

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
		ptr2[i] = malloc(sizeof(int) * width);
		if (ptr2[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr2[i]);
			}
			free(ptr2);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				ptr2[i][j] = 0;
			}
		}
	}
	return (ptr2);
}
