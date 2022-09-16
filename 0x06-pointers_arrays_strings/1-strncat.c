#include "main.h"
#include <string.h>
/**
 * _strncat - to  concatenates two strings.
 * @dest: a character
 * @src: a character
 * @n: an integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}

