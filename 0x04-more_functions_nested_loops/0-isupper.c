#include "main.h"

/**
 * _isupper - to check for upper case
 * @c: is an int
 * Return: zero and one
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
