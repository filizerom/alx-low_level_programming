#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr -  function that concatenates all the arguments of your program
* @ac: an integer
* @av: an integer
*Return: NULL if ac and av = 0
*/
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (j < ac)
	{
		while (av[j][k])
		{
			i++
			k++;
		}
		k = 0;
		j++;
	}
	c = malloc((size0f(char) * i) + ac + 1);

	j = 0;
	while (av[j])
	{
		while (av[j][k])
		{
			c[l] = av[j][k];
			l++;
			k++;
		}
		c[l] = '\n';

		k = 0;
		l++;
		j++;
	}
	l++;
	c[l] = '\0';
	return (c);
}
