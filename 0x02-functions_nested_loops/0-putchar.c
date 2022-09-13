#include "main.h"
/**
 * main - to write a program that prints _putchar.
 * Description: use main function.
 * return 0
 */
int main(void)
/**
 * to use as main 
 *
 */
{
char *lk = "_putchar";
while (*lk)
{
	_putchar(*lk);
	lk++;
}
_putchar('\n');
return (0);
