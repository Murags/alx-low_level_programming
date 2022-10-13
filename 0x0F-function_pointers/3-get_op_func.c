#include "3-calc.h"
#include <stdio.h>
/**
*get_op_func - Calls correct function based on the operator
*
*@s: operator
*
*Return: correct function call
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	i = 0;

	while (i < 6)
	{
		if (*(ops[i].op) == *s)
			break;
		i++;
	}
	return ((ops[i]).f);
}
