#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator - preforms a function on elements of an array
*
*@array: integer array
*@size: size of the array
*@action: function to be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0 && action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == '\0')
				break;

			action(array[i]);
		}
	}
}
