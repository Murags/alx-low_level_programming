#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers - print all numbers passed as arguments
*
*@separator: separator between the numbers
*@n: number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n <= 0)
		return;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
		}
		else
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}

	va_end(ap);
}
