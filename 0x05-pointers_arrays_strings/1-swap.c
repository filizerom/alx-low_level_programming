#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a:an integer
 * @b:an integer
 * return - zero(o)
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
