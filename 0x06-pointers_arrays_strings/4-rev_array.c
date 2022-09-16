#include "main.h"
#include <string.h>

/**
* reverse_array
* @a: a character
* @n: an integer
* return: zero
*/
void reverse_array(int *a, int n);
{
	int *p, b, aux, c;
	p = a;

	for (a = 0; a < n; a++)
		p++;
	for (c = 0; c < n / 2; c++)
	{
		aux = a[c];
		a[c] = *p;
		*p = aux;
		p--;
	}
}
