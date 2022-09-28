#include "main.h"

/**
 * check_num - recursion loop
 * @n: number
 * @x: number to iterate
 * Return: 1 or 0
 */

int check_num(int n, int x)
{
	if (x == n - 1)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (check_num(n, x + 1));
}

/**
 * is_prime_number - check prime or not
 * @n: a number
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	int x;

	x = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (check_num(n, x));
}
