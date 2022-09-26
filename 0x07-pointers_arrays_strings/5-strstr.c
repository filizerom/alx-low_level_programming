#include "main.h"
#include <string.h>

/**
* _strstr - a function that locates a substring.
* @haystack: a character
* @needle: a character
* Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	
	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	
	return ('\0')
}
