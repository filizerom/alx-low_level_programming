#include "main.h"
#include <string.h>

/**
* _strpbrk -  a function that searches a string for any of a set of bytes
*@s: a character
*@accept: a character
* Return: NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)

	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
