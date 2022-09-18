#include "main.h"
#include <string.h>

/**
 * _strncpy - copy the string
 * @dest: a character
 * @src: a character
 * @n: an integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
