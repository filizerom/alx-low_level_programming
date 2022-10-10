#include "dog.h"
#include <stdlib.h>

/**
* init_dog -  initialize a variable of type struct dog
* @d: a stucture dog
* @name: the name of dog
* @age: its age
* @owner: dogs owner
* return: zero
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

