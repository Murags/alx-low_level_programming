#include "main.h"
/**
*clear_bit - sets the value of a bit to 0 at a given index.
*
*@n: pointer to integer input
*@index: index to set
*
*Return: 1 on success else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= 64)
		return (-1);

	*n = *n & (~(1<<index));

	return (-1);
}
