#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: anumber to be factored
 * Return: factor of anumber
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
	}
