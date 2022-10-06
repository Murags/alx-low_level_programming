#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
*main - multiplies two numbers
*
*@argc: number of arguments
*@argv: argument vector
*
*Return: 0;
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
}
