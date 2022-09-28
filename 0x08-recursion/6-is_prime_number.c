#include "main.h"
/**
* is_prime_number1 - evaluate from 1 to n
* @a: an integer
* @b: an integer
* Return: zero
*/
int is_prime_number1(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));

}

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
