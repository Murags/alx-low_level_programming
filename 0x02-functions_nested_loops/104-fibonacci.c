#include "main.h"
#include <stdio.h>
/**
*main - prints first 98 Fibonacci numbers
*
*Return: 0 (Success)
*/
int main(void)
{
	long long int prev, curr, next, alt;
	int counter;

	prev = 1;
	curr = 2;
	next = prev + curr;

	printf("%lld, %lld", prev, curr);

	for (counter = 2; counter < 98; counter++)
	{
		if (next >= 0)
		{
			next = prev + curr;
			printf(", %lld", next);
			prev = curr;
			curr = next;
		}
		else
		{
			alt = 9223372036854775807 + next;
			printf(", %lld", alt); 
		}
	}
	printf("\n");
	return (0);
}
