#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: a string to check
 * @c: character to check
 *
 * Return: pointers to spot in s with c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i  = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
