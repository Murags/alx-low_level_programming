#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
*
* @array: array to search in
* @size: size of the array
* @value: value to look for
*
* Return: index of value else -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int size_int = size;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size_int; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	return (-1);
}
