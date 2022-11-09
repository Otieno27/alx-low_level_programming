#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new allocated space in memory
 * 		containing a copy of string given as parameter
 * @str: string to be copied
 *
 * Return: if str == NULL or insufficient memory - NULL
 * 		otherwise, pointer to duplicated string
 */
char *strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\n';

	return (duplicate);
}


