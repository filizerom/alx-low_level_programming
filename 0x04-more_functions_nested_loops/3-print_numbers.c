#include "main.h"
/**
 * print_number - print 0 to 9
 * return: zero 
 */
void print_numbers(void)
{	
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	_putchar('\n');
}
