#include "main.h"
#include <stdio.h>

/**
* print_buffer - print a buffer
* @b: a character
* @size: an integer
*/
void print_buffer(char *b, int size)
{
	int byte = 0, i;
	
	if (size < 0)
	{
		printf('\n');
		return;
	}
	while (byte < size)
	{
		if (byte % 10 == 0)
			printf("%08x: ", byte);
		for (i = byte; i < byte + 9; i +=2)
		{
			if ((i < size) && ((i + 1) < size))
				printf("%02x%02x: ", b[i], b[i + 1]);
			else
			{
				while (++i <=i +10)
					printf(" ");
				printf(" ");
			}
		}
		for (i = byte; i < byte + 9 && i < size; i++)
		{
			if (b[i] >= 32 && b[i] <= 126)
				printf("%c", b[i]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
		
	}
}
