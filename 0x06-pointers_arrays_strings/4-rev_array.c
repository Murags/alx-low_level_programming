#include "main.h"
/**
*reverse_array - reverses an array
*
*@a: array parameter
*@n: number of elements
*/
void reverse_array(int *a, int n)
{
	int i, j, counter, temp;

	counter = n;
	j = n - 1;
	for (i = 0; i < n; i++)
	{
		if  (counter > 1)
		{
			temp = *(a + i);
			*(a + i) = *(a + j);
			*(a + j) = temp;
			j--;
			counter -= 2;
		}
		else
		{
			break;
		}
	}
}
