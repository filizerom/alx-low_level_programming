#include "main.h"
/**
* infinite_add - a function that adds two numbers
* @n1: a character
* @n2: a character
* @r: a character
* @size_r: an integer
* Return: zero
*/	
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n3 = 0, n4 = 0;

	for (i = 0; *(n1 + i); i++)
		n3++;
	for (i = 0; *(n2 + i); i++)
		n4++;
	if (size_r <= n3 + 1 || size_r <= n4 + 1)
		return (0);

	n1 += n3 - 1;
	n2 += n4 - 1;
	*(r + size_r) = '\0';

	return (0);
}
