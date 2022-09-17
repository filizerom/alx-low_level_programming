#include "main.h"

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
