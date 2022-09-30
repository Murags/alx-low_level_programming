#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - prints sum of arguments
*
*@argc: argument count
*@argv: argument vectors
*
*Return: 0 (success) else 1
*/
int main(int argc, char *argv[])
{
	int i, j, total;

	total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
