#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - a function
*@argc: an arguement
*@argv: an arguement
*Return: -1 0r 0
*/
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
