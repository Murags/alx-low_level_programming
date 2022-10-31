#include "main.h"
/**
*get_bit - returns the value of a bit at a given index
*
*@n: input to search through
*@index: index to get value at
*
*Return: value of bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int binaryNum[63];
	unsigned int i = 0, j;

	if (n == 0 && index < 64)
		return (0);

	while (n > 0)
	{
		binaryNum[i++] = n % 2;
		n /= 2;
	}

	for (j = 0; j < i; j++)
	{
		if (j == index)
			return (binaryNum[j]);
	}
	return (-1);
}
