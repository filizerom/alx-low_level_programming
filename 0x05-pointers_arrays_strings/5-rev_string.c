#include "main.h"
/**
 * rev_string - reverse a strring
 * @s: - a character
 * return zero
 */
void rev_string(char *s)
{
	int a, b, c;

	char *d, aux;

	d = s;
	while (s[b] != '\0')
	{
		b++;
	}
	for (c = 1; c < b; c++)
	{
		d++;
	}
	for (a = 0; a < (b / 2); a++)
	{
		aux = s[a];
		s[a] = *d;
		*d = aux;
		d--;
	}
}
