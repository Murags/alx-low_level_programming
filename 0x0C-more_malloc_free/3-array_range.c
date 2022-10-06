#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers.
*
*@min: minimum integer in range
*@max: maximum integer in range
*
*Return: array of integers
*/
int *array_range(int min, int max)
{
	int elem, i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	elem = (max - min) + 1;

	arr = malloc(sizeof(int) * elem);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (; min <= max; min++)
	{
		arr[i] = min;
		i++;
	}
	return (arr);
}
