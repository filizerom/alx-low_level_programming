#include "main.h"
#include <stdlib.h>

/**
*_strdup - returns a pointer to a newly allocated space in memory
* @str - a character
* Return: NULL
*/
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *k;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		j++;
	}
	k = malloc((sizeof(char) * j) + 1);


	if (k == NULL)
		return (NULL);

	while (i < j)
	{
		k[i] = str[i];
		i++;
	}
	k[i] = '\0';
	return (k);
}
