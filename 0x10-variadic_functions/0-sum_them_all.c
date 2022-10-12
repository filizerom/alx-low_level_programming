#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters.
* @n: an integer
* Return: zero if n==0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, j = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		j += va_arg(a, int);
	va_end(a);

	return (j);
}

