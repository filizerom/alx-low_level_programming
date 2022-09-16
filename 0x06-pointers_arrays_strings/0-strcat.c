#include "main.h"
/**
 * -strcat - appends the src string to the dest string
 * @dest: a character
 * @src: a character
 * return: character dest
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
	return (dest)
}
