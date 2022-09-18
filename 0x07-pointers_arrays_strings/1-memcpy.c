#include "main.h"

/**
*_memcpy -  function copies n bytes from memory
* @n: unsigned integer
* @src: a character
* @dest: a character
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}

