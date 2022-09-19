#include "main.h"
/**
 * rev_string - reverse a strring
 * @s: - a character
 * return zero
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char tmp;

	while (s[b++])

		b++;

	for (b = a - 1; b >= a / 2; b--)
	{
		tmp = s[b];
		s[b] = s[a - b -1];
		s[a -b - 1] =tmp;
	}
}
