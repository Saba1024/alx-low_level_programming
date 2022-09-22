#include <unistd.h>

/**
 * _puchar - writes the character to stdout
 * @c: the character
 *
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
