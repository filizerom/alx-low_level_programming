#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: nothing
 */
int main(void)
{
	char passwo[84];
	int index = 0, sum = 0, diff_haf1, diff_haf2;

	srand(time(0));

	while (sum < 2772)
	{
		passwo[index] = 33 + rand() % 94;
		sum += passwo[index++];
	}
	passwo[index] = '\0';

	if (sum != 2772)
	{
		diff_haf1 = (sum - 2772) / 2;
		diff_haf2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_haf1++;
		for (index = 0; passwo[index]; index++)
		{
			if (passwo[index] >= (33 + diff_haf1))
			{
				passwo[index] -= diff_haf1;
				break;
			}
		}
	for (index = 0; passwo[index]; index++)
	{
		if (passwo[index] >= (33 + diff_haf2))
		{
			passwo[index] -= diff_haf2;
			break;
		}
	}
	printf("%s", passwo);
	return (0);
}
