#include "main.h"
#include <string.h>

/**
 * _strcat - appends the src string to the dest string
 * @dest: a character
 * @src: a character
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dis, i;

	while (dest[dis])
	dis++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dis] = src[i];
		dis += 1;
	}
	dest[dis] = '\0';
	return (dest);
}
