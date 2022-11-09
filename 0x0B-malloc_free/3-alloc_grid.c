#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2-dimension array
 * 		of integers with each element initialized to 0
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: if width <= 0, height <= 0 - NULL
 * 		otherwise, a pointer to the 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		twoD[hgt_i] = malloc(sizeof(int) * width);

		if (twoD[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(twoD[hgt_i]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			twoD[hgt_i][wid_i] = 0;
	}

	return (twoD);
}
