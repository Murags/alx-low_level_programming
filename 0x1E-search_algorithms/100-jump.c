#include <math.h>
#include "search_algos.h"
/**
* jump_search - searches for a value in an array of integers
*
* @array: array to search in
* @size: size of the array
* @value: value to look for
*
* Return: index of value else -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t blocks, prev = 0, i;

	blocks = 0;

	if (array == NULL || value == \0 || size == 0)
		return (-1);

	while (blocks < size)
	{
		if (array[blocks] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", blocks, array[blocks]);
			prev = blocks;
			blocks += sqrt(size) / 1;
			continue;
		}
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, blocks);
			for (i = prev; i <= blocks; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	if (blocks > size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", prev, blocks);
		for (i = prev; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
