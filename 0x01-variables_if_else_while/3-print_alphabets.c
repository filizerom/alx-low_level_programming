#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet with lower and uppercase
 * Describtion: using  the main function
 * return: 0
 * /
 
int main(void)
{
	char alp;
	for (alp ='a'; alp<='z'; alp++)
	{
		putchar(alp);
	}
	for(alp ='A'; alp <='Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
return 0;
}
