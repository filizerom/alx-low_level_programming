#include <stdio.h>

/**
 * main - this is the main function
 * description - the starting point of the programe
 * Return:0
 */

int main(void)
{
	char alp;
	for (alp ='a'; alp <='z'; alp++)
	{
		if (alp !='e' && alp !='q')
		{
			putchar(alp);
		}
	}
	putchar('\n');

	return (0);
}
