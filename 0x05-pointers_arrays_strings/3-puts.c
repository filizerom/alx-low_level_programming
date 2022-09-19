#include "main.h"

/**
 * _puts - to print a string of stdout
 * @*str: a string
 *return zero
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
