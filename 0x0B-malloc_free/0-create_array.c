#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array to be initialized
 * @c: char to initialize array with
 *
 * Return: if size == 0 or function fails - NULL,
 * otherwise - a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
