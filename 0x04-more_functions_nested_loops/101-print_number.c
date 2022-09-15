#include "main.h"
/**
 * print_number - print number
 * @n: number of times
 */
void print_number(int n)
{
	unsigned int num = i;

	if (i < 0)
	{
		putchar('_');
		num = -num;
	}
	if ((num / 10) > 0)
	{
	print_num(num / 10);
	_putchar((num % 10) + '0');
	}
}
