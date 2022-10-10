#include "dog.h"
#include <stdlib.h>

/**
* free_dog -  function that frees dogs.
* @d: to free the dog
* Return: zero
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

