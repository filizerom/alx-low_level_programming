#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: an integer
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	return(m);
}
