#include <stdio.h>
/**
 * add - print the sum of all multiple 3 and 5
 * return 0
 */
int main(void)
{
	int sum1 = 0, sum2 = 0, sum3 = 35190;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)

		{
			sum1 += i;
		}
		if (i % 5 == 0)
		{
			sum2 += i;
		}
	}
	printf("%d\n", sum1 + sum2 - sum3);
	return (0);
}
