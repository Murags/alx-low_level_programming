#include "main.h"
/**
*_print_rev_recursion - prints string in reverse
*
*@s: pointer to first haracter in string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
