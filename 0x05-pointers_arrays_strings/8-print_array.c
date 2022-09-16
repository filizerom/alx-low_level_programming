#include "main.h"
/**
 * print_array - print n elements of an array of integers, followed by a new line.
 * @a: an integer
 * @n: an integer
 * return: zero(0)
 */
void print_array(int *a, int n)
{
	int b;
	
	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
