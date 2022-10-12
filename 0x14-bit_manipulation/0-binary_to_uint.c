#include "main.h"

/**
* binary_to_uint - unsigned integer
* @b: a pointer to a string of 0 and 1
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int nu = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		nu = 2 * nu + (b[len] - '0');

	}
	return (nu);
}

