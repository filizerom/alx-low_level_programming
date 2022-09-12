#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all digit number of 10 starting from zero
 * Description: use main function and putchar only
 *Return: 0
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
	putchar(i);
}
putchar("\n");
return 0;
}
