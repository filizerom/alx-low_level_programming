include "main.h"
	
/**
 * jack_bauer - prints every minutes
 * Return: 0
 */
	
void jack_bauer(void)
{
	int hr;
	int min;
	int hrs_rmnder;
	int min_rmnder;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			hrs_rmnder = hr % 10;
			min_rmnder = min % 10;
			_putchar((hr / 10) + '0');
			_putchar(hrs_rmnder + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar(min_rmnder + '0');
			_putchar('\n');
		}
	}
}
