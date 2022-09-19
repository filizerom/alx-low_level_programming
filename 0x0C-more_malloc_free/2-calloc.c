#include "main.h"
#include <stdlib.h>
/**
* _calloc - a function that allocates memory for an array
* @nmemb: an integer
* @size: an integer
* Return: nmemb
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	cchar *n;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	for (i = 0; i < (size * nmemb); i++)
		n[i] = '\0';

	return (m);
}
