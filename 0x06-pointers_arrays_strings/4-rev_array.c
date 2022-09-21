#include "main.h"
#include <string.h>

/**
* reverse_array - function that changes all lowercase.
* @a: a character
* @n: an integer
* return: zero
*/
void reverse_array(int *a, int n);
{
	int i, j;

	for (i = n - 1; i > n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n -1 - i] = a[i];
		a[i] = j;
	}
}
