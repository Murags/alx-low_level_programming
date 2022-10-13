#include "function_pointers.h"
#include <stdio.h>
/**
*int_index - function that searches for an integer.
*
*@array: array of integers
*@size: size of array
*@cmp: funtion that compares values
*
*Return: Index of first matching value else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size; i++)
	{
		if (cmp(array[i]) != '\0')
			break;

		else if (cmp(array[i]) == '\0')
			continue;
	}

	if (i == size)
		return (-1);

	return (i);
}
