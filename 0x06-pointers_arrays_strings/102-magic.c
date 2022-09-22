#include <stdio.h>

/**
 * main - a function
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 *   -you are not allowed to modifiy p
 *   - only one statement
-you are not allowed to code anything else
 */                             

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 124;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
