#include "main.h"
/**
 * _evaluate - evaluate sqrt
 * @x: integer
 * @n: integer
 * Return: sqrt
 */

int _evaluate(int x, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (x * x < n)
		return (_evaluate(x + 1, n));
	else if (x * x == n)
		return (x);
	return (-1);
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an int
 * Return: sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (x < 0)
		return (-1);

	else
	{
		return (_evaluate(x, n));
	}
}
