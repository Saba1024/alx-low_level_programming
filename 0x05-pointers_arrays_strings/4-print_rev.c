#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string printed in rev
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\n')
		n++;

	for (i = n - 1; i >= 0;
			i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
