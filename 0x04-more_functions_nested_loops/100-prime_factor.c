#include <stdio.h>
/**
 * main - find the largest number
 * return: zero(0)
 */
int main(void)
{
long num = 612852475143;
int i;
while (i++ < num / 2)
{
if (num % i == 0)
{
num /= 2;
continue;
}
for (i = 3; i < num / 2; i += 2)
{
if (num % i == 0)
num /= i;
