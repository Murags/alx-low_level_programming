#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%s\n", va_arg(ap, char *)); 
			break;
		}
		else
		{
			printf("%s%s", va_arg(ap, char *), separator);
		}
		
	}

	va_end(ap);
}
