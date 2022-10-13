#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - perform calculation
*
*@argc: number of arguments
*@argv: argument vector
*
*Return: 0 success
*/
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (int)(get_op_func(argv[2])(num1, num2));

	printf("%d\n", result);
	return (0);
}
