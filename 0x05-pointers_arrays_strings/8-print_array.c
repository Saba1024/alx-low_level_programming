#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			prinf("%d", a[inc]);
	}
	_putchar(10);
}
