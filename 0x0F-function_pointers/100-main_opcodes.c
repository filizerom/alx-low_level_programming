#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the opcodes
* @argc: The number of arguments supplied to the program
* @argv: An array of pointers to the arguments.
* Return: noting
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*c)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);

	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (b = 0; b < a; b++)
	{
		opcode = *(unsigned char *)c;
		printf("%.2x", opcode);

		if (b == a - 1)
			continue;
		printf(" ");

		c++;
	}

	printf("\n");
	return (0);
}

