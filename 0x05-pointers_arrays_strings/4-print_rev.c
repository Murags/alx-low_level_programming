#include "main.h"
/**
*print_rev - prints string in reverse
*
*@s: pointer to string
*/
void print_rev(char *s)
{
	int i, strlen;

	for (strlen = 0; *(s + strlen) != '\0'; strlen++)
	{
	}

	for (i = (strlen - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
