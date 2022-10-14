#include "variadic_functions.h"
/**
*sum_them_all - sums the number of arguments given
*
*@n: number of arguments
*
*Return: sum of the arguments else 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
