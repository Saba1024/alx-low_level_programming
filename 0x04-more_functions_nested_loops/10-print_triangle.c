#include "main.h"

/**
 * print_triangle - function that prints atringle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b <= (size - 1); b++)
		{
			for (a = 0; a < (size - a) - b; a++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= b; c++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
}
