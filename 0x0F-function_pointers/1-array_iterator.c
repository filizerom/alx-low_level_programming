#include "function_pointers.h"

/**
* array_iterator - function that executes a function
*  given as a parameter on each element of an array.
*  @array: an integer
*  @size: an integer
*  @action: a pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}

