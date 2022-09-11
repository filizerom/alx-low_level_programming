#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all the lettters except e and q
 * Description: with main function
 * return: 0
 * /
int main(void)
{
char ap;
for(ap ='a'; ap<='z'; ap++)
{
if(ap !='e' && ap !='q')
{
       putchar(ap);
}
}
putchar('\n');
return (o);
}
