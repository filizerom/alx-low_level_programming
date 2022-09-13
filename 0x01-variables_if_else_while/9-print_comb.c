#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible combination of single digit numbers
 * Description: use main function and int
 * return 0
 */

int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
	putchar(i);
	if (i != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
