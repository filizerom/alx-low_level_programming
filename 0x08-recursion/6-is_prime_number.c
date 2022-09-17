#include "main.h"

/**
* is_prime_number - function that returns 1 if prime number
* @n: a character
* Return: 1
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
