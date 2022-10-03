#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 * @str: pointer to string
 *
 * Return: null if str is null
 * pointer to duplicated string on success
 * Null if memory is insufficent
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len  = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}

