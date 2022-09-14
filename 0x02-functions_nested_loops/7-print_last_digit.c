#include "main.h"
/**
 * print_last_digit - last digit of number
 * @n: a number
 * 
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	
	if (last digit < 0)
		last digit *= -1;
	
	_putchar(last_digit + '0');
	
	return(last_digit)
}
