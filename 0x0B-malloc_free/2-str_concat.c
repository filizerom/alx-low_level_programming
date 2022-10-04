#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
* str_concat - function that concatenates two strings.
* @s1: a character
* @s2: a character
* Return: NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	c = malloc((sizeof(char) * l) + 1);

	if (c == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			c[k] = s1[k];

		if (k >= i)
		{
			c[k] = s2[j];
				j++;
		}
		k++;
	}
	c[k] = '\0';
	return (c);
}
