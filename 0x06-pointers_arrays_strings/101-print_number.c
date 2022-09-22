#include "main.h"

void print_uint(unsigned int n);

/**
 * print_number - a function that prints an integer.
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_uint((unsigned int) n);
}

/**
 * print_uint - prints an unsigned integer
 * @n: the unsigned int to print
 */
void print_uint(unsigned int n)
{
	if (n / 10 != 0)
		print_uint(n / 10);

	_putchar((n % 10) + '0');
}
