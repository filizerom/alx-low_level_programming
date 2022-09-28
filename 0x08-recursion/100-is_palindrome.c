#include "main.h"
/**
* palindm1 - obtains length of i
* @i: a character
* @j: an intger
* Return: zero(0)
*/
int palindm1(char *i, int j)
{
	if (*i == 0)
		return (j - 1);
	return (palindm1(i + 1, j + 1));
}
/**
* palindm2 - compares string vs string reverse
* @i: a character
* @j: an integer
* Return: 0
*/
int palindm2(char *i, int j)
{
	if (*i != *(i + j))
		return (0);
	else if (*i == 0)
		return (1);
	return (palindm2(i + 1, j - 2));
}

/**
* is_palindrome - function that returns
* @s: a character
* Return: zero
*/
int is_palindrome(char *s)
{
	int j;

	j = palindm1(s, 0);
	return (palindm2(s, j));
}
