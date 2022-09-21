#include "main.h"
/**
*cap_string - capitalizes string
*
*@str: string parameter
*
*Return: capitalized string
*/
char *cap_string(char *str)
{
	int i;

	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	for (i = 1; *(str +i) != '\0'; i++)
	{
		if (*(str + (i - 1)) == ' '||
		*(str + (i - 1)) == '\t'||
		*(str + (i - 1)) == '\n'||
		*(str + (i - 1)) == ','||
		*(str + (i - 1)) == ';'||
		*(str + (i - 1)) == '.'||
		*(str + (i - 1)) == '!'||
		*(str + (i - 1)) == '?'||
		*(str + (i - 1)) == '"'||
		*(str + (i - 1)) == '('||
		*(str + (i - 1)) == ')'||
		*(str + (i - 1)) == '{'||
		*(str + (i - 1)) == '}')
		{
			if (*(str + i) >= 'a' && *(str + i) <= 'z')
			{
				*(str + i) -= 32;
			}
		}
		else
		{
		}
	}
	return (str);
}
