#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lower and uppercase.
 *
 * Return: 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
