#include "main.h"
#include <string.h>
/**
* _strspn -  a function that gets the length of a prefix substring
* @s: a character
@accept: a character
* byte: an integer
* Return: byte
*/
unsigned int _strspn(char *s, char *accept);
{
	unsigned int byte;
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
