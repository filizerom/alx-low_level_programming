#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - to print a string, in reverse followed by a new line.
 * @s: a character
 * return - 0
 */
void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
		putchar(*(s + length));
	putchar('\n');
}
