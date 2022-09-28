#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int to be power
 * @y: int of power
 * Return: int ofpowered number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
