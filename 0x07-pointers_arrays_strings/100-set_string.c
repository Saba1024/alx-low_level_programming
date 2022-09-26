#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a apointer to change
 * @to: string to change to char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	**s = *to;
}
