#include "3-calc.h"
#include <stdio.h>
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
		if ((ops[i])[0] == s)
		return (ops[i])[1];
		i++;
	}
}