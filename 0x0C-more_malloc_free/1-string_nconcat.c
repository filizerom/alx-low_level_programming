#include "main.h"
#include <stdlib.h>

/**
* string_nconcat -  function that concatenates two strings
* @s1: a character
* @s2: a character
* @n: an integer
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int le = n, i;

	if ( NULL)
s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		le++;

	conc = malloc(sizeof(char) * (le + 1));

	if (conc == NULL)
		return (NULL);

	le = 0;

	 for (i = 0; s1[i]; i++)
		conc[le++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		conc[le++] = s2[i];

	conc[le] = '\0';
	return (conc);
}
