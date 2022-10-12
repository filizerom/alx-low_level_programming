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
	unsigned int nu = 0, mul = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		nu += (b[len] - '0') * mul;
		mul *= 2;

	}
	return (nu);
}

