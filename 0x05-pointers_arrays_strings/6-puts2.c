#include "main.h"
/**
*puts2 - prints every other character
*
*@str: pointer to string
*/
void puts2(char *str)
{
	if(*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
		while (*str != '\0')
		{
			str--;
			if (*str != '\0')
			{
				str++;
				_putchar(*str);
				str += 2;
			}
		}
	}
	_putchar('\n');
}
