#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: input
 * Return: values of n
 */
char *leet(char *n)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	while (n[++i])
	{
		for (i = 0; j <= 7; j++)
		{
			if (n[i] == leet[j] || n[i] - 32 == leet[j])
				n[i] = j + '0';
		}
	}
	return (n);
}
