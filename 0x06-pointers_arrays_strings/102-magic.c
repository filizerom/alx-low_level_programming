#include <stdio.h>
/**
* main - to add one line to this code
* make sure you are allowed only one code
*/
int main(void)
{
	int n;
	int a[5];
	int *p;
	
	a[2] = 98;
	p = &n;

	*(p + 5) = 1024;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
