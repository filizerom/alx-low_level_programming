#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all letter except e and q
 * Description: use main function
 * Return: 0
 */
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
if (alp != 'e' && alp != 'q')
{
	putchar(alp);
}
}
putchar('\n');
return (0);
}
