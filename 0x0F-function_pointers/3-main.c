#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int result, num1, num2;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result =(int)(get_op_func(argv[2])(num1, num2));

	printf("%d\n", result);
	return (0);
}
