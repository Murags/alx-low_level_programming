#include "main.h"
#include <stdio.h>
/**
*print_diagsums -  prints the sum of the two diagonals
*of a square matrix of integers
*
*@a: array matrix
*@size: size of array
*/
void print_diagsums(int *a, int size)
{
	int diagsum1, i, diagsum2, j;

	diagsum1 = 0;
	diagsum2 = 0;
	for (i = 0; i < size; i++)
	{
		diagsum1 += a[(size + 1) * i];
	}

	for (j = 0; j < size; j++)
	{
		diagsum2 += a[(size - 1) * (j + 1)];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
