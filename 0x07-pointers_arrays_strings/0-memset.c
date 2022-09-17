#include "main.h"

/**
* _memset - function fills the first n bytes of the memory
* @n: unsigned integer
* @s: a character
* @b: a character
* return - @s will be
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
