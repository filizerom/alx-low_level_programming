#include "main.h"
/**
 * puts_half
 * @str: a character
 * return - 0
 */
void puts_half(char *str)
{
	int a;
	int b;
	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b += 1;
	}
	else
	{
		b = a / 2;
	}
	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
