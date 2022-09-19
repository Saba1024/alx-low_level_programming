#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: a parameter to _puts
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
