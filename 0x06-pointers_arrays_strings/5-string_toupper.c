#include "main.h"
#include <string.h>
/**
* string_toupper - change all lowercase to uppercase
* @n: a character
* Return: n
*/
char *string_toupper(char *n)
{
	int a = 0;

	while (n[a])
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}
