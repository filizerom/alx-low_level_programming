#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*  print_numbers - Prints numbers, followed by a new line.
*  @separator: a character
*  @n: an integer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(a);

}

