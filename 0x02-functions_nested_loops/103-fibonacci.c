#include <stdio.h>
/**
 * main - main
 * Return: zero(0)
 */
int main(void)
{
	int n = 1, a = 2, b = 0;
	int i;


	while (a < 4000000)
	{
		if (a % 2 == 0)
			b += a;

		i = a;
		a + = n;
		n = i;
	}
	printf("%d\n", b);
	return (0);
