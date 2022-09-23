#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
* infinite_add - a function that adds two numbers
* @n1: a character
* @n2: a character
* @r: a character
* @size_r: an integer
* Return: zero
*/
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, ten = 0;
	
	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += ten;
		*(r + r_index) = (num % 10) + '0';
		ten = num / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + ten;
		*(r + r_index) = (num % 10) + '0';
		ten = num / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + ten;
		*(r + r_index) = (num % 10) + '0';
		ten = num / 10;
	}
	
		
	if (ten && r_index >= 0)
	{
		*(r + r_index) = (ten % 10) + '0';
		return (r + r_index);
	}
	else if (ten && r_index < 0)
		return (0);

	return (r + r_index +1);
}

		
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

	return (add_strings(n1, n2, r, --size_r));
}
