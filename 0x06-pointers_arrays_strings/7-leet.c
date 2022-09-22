#include "main.h"

/**
* leet - function that encodes a string into 1337.
* @c: a character
* Return: 0
*/
char *leet(char *c)
{
	int i = 0, j;
	char a[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (c[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (c[i] == a[j] ||
			    c[i] - 32 == a[j])
				c[i] = j + '0';
		}
		i++;
	}
	return (c);
}

