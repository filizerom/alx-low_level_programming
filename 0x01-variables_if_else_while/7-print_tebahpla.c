#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print lower case in reverse
 * Description: use main function and char
 * return 0
 */
int main(void)
{
	char i;
	for (i = 'z'; i >= 'a'; i--)
{
		putchar(i);
}
	putchar('\n');
	return (0);
}
