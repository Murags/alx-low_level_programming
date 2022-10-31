#include "main.h"
/**
*get_endianness - Determines if machine is big or little endian
*
*Return: 0 if big endian else 1
*/
int get_endianness(void)
{
	int num = 1;
	char *c;

	c = (char *)&num;

	if (*c == 0)
		return (0);
	else
		return (1);
}
