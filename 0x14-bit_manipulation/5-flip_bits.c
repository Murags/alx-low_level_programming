#include "main.h"
/**
*flip_bits - returns the number of bits you would need
*to flip to get from one number to another.
*
*@n: integer input
*@m: integer input
*
*Return: number of bits you would need to flip else -1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int different;
	unsigned int count = 0;

	if (n == 0 || m == 0)
		return (-1);

	different = n ^ m;

	while (different)
	{
		count += different & 1;
		different = different >> 1;
	}
	return (count);
}
