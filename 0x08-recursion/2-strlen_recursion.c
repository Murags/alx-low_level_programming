#include "main.h"
/**
*_strlen_recursion - calculates string length
*
*@s: pointer to first character in string
*
*Return: stirng length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
