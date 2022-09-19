#include "main.h"
#include <stdlib.h>

/**
* array_range - function that reallocates a memory
* block using malloc and free
* @min: an integer
* @max: an integer
* Return: the pointer
*/
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
