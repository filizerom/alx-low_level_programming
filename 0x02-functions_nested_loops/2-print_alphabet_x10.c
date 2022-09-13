#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line
 * Description: void print_alphabet_x10(void
 * return: 0
 */
void print_alphabet_x10(void)
{
	char i, j;
	for (j = 0; j < = 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
