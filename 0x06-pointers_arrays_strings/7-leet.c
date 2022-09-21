#include "main.h"

/**
* leet - function that encodes a string into 1337.
* @c: a character
* Return: 0
*/
char *leet(char *c)
{
	int i = 0, j, k = 5;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};

	while (c[i])
	{
		j = 0;
	}

		while (j < k)
		{
			if (c[i] == a[j] || c[i] - 32 == a[j])
				c[i] = b[j];
			j++;
		}
		i++;
	}
	return (c);
}

