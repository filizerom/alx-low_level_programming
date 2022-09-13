#include "main.h"
/**
 * print_last_digit - last n
 * @n: n for arguement
 * int - use n
 * Return: n
 */
int print_last_digit(int)
{
	int m;

	if (n < 0)
	    n = -n;
	m= n % 10;
	_putchar(m + '0');
	return (n % 10);
}
