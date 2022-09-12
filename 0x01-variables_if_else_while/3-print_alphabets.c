#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print upper and lower case
 * Description: use main function
 * Return: 0
 */
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
	putchar(alp);
}
for (alp = 'A'; alp <= 'Z'; alp++)
{
	putchar(alp);
}
putchar('\n');
return (0);
}
