#include <stdio.h>
/**
 * add - print the sum of all multiple 3 and 5
 * return 0
 */
int main(void)
{
	int sum1 = 0, int sum2 = 0;
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)

		{
			sum1 += i;
		}
		if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum1 + sum2);
	return (0);
