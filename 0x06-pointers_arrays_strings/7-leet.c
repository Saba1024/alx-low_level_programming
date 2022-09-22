#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: input
 * Return: values of n
 */
char *leet(char *n)
{
	int i = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (n[i])
	{
		b = 0;

		while (b < l)
		{
			if (n[i] == tr[b] || n[i] - 32 == tr[b])
				n[i] = trw[b];
			b++;
		}
		i++;
	}
	return (n);
}
