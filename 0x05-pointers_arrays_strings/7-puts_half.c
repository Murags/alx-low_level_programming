#include "main.h"
/**
*puts_half - prints half a string
*
*@str: pointer to string
*/
void puts_half(char *str)
{
	int length_of_the_string, n;

	length_of_the_string = 0;

	for (; *(str + length_of_the_string) != '\0'; length_of_the_string++)
	{
	}

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		for (; n < length_of_the_string; n++)
		{
			_putchar(*(str + n));
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		for (; (n+1) <= length_of_the_string; n++)
		{
			_putchar(*(str + n));
		}
	}
	_putchar('\n');
}
