#include "main.h"
/**
*swap_int - swaps two integers
*
*@a: int param
*
*@b: int param
*/
void swap_int(int *a, int *b)
{
	int holder;

	holder = *b;
	*b = *a;
	*a = holder;
}
