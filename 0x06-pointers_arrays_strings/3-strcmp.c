#include "main.h"
#include <string.h>

/**
* _strcmp - compare two strings
* @s1: a character
* @s2: a character
* Return: zero
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
