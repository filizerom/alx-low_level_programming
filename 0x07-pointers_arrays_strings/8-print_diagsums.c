#include "main.h"
#include <stdio.h>

/**
* print_diagsums -  function that prints the sum of the two diagonals.
* @a: a character
* @size: an integer
*/
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size + 1) * i];
		sum1 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
