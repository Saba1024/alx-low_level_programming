#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: string to be encoded
 *
 * Return: address of the encoded string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}
