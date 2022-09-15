#include "main.h"
/**
 * print_number - print number
 * @n: number of times
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('_');
		num = -num;
	}
	if ((num / 10) > 0)
	{
	print_number(num / 10);
	_putchar((num % 10) + '0');
	}
}
