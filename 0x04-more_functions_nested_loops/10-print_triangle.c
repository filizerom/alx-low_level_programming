#include "main.h"
/**
 * print_triangle - followed by new line
 * @size: number of times
 */
void print_triangle(int size)
{
int a, b;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (index = size - hash; index > 0; index--)
	_putchar(' ');
for (index = 0; index < hash; index++)
	_putchar('#');
if (hash == size)
	continue;
_putchar('\n');
}
}
_putchar('\n');
}
