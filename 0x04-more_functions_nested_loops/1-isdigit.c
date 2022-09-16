#include "main.h"
/**
 * _isdigit - to check from 0 to 9
 * @c is an int
 * Return: zero or one
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
