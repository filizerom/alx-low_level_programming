#include "main.h"
#include <stdlib.h>
/**
*
* _realloc -  function that reallocates a memory block
* using malloc and free
* @*ptr: a pointer
*@old_size: an integer
*@new_size: an integer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *ptr_copy, *f;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	m = malloc(sizeof(*ptr_copy * new_size;

		if (m == NULL)
		{
			free(ptr);
			return (NULL);
		}
		f = m;

		for (i = 0; i < old_size && i < new_size; i++)
			f[i] = *ptr_copy++;
		free(ptr);
		return (m);
}
