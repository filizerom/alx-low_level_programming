#include "main.h"
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	cchar *n;
	unsigned int i;
	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	for (i = 0; i < (size *nmemb); i++)
		n[i] = '\0';

	return (m);
}
