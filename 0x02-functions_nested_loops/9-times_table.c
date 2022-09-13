#include "main.h"
/**
 * times_table-print 9 times
 *
 */
void times_table(void)
{
	int n, o, r;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (o = 1; o <= 9; o++)
		{
			_putchar(',');
			_putchar(' ');

			r = n + o;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
