#include "main.h"
/**
 * print_last_digit - last digit of number
 * @n: a number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	
	if (n < 0)
		n = -n;

		_putchar(n + '0');
		return (0);
}
