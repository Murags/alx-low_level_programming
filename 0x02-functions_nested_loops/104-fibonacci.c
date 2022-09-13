#include "main.h"
#include <stdio.h>
/**
*main - prints first 98 Fibonacci numbers
*
*Return: 0 (Success)
*/
int main(void)
{
	unsigned long int prev, curr, next;
	int counter;

	prev = 1;
	curr = 2;
	next = prev + curr;

	printf("%lu, %lu", prev, curr);

	for (counter = 2; counter <= 98; counter++)
	{
		next = prev + curr;
		printf(", %lu", next);
		prev = curr;
		curr = next;
	}
	printf("\n");
	return (0);
}
