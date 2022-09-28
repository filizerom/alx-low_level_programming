#include "main.h"
/**
*sqrt2 -  evaluate from 1 to n
* @i: an integer
* @j: an integer
* Return:zero
*/
int sqrt2(int i, int j)
{
	if (j * j == i)
		return (j)
	if (j == i / 2)
		return (-1);
	return (sqrt2(i, j + 1));
}

/**
* _sqrt_recursion -  function that returns the natural square root of a number.
* @n: an integer
* Return: 0
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
