#include "main.h"
/**
 * print_line - draw a straight line in terminal
 * @n: number of times
 * return: use putchar
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
