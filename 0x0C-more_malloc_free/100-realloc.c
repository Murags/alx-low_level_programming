#include "main.h"
#include <stdlib.h>
/**
*_realloc - function that reallocates a memory block using malloc and free
*
*@ptr:pointer to the memory previously allocated
*@old_size: size of ptr
*@new_size: new memory size
*
*Return: pointer to new memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	char *temp = ptr, *temp2;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);

		if (ptr2 == NULL)
			return (NULL);

		return (ptr2);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(sizeof(*temp) * new_size);

	if (ptr2 == NULL)
	{
		free(ptr);
		return (NULL);
	}
	temp2 = ptr2;
	for (i = 0; i < new_size && i < old_size; i++)
	{
		temp2[i] = temp[i];
	}
	free(ptr);
	return (ptr2);
}
