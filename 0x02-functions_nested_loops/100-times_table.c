#include "main.h"
/**
 * void print_times_table - print n times
 * @n - is a number
 *
 */
void print_times_table(int n)
{
	int x, y, z;
	
	if (n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
	
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
      				_putchar(' ');
  
				z = x * y;

				if (z <= 9)
					_putchar(' ');

				else
					_putchar((z / 10) + '0');

				_putchar((z % 10) + '0');

				}
			_putchar('\n');
		}

	}

}
