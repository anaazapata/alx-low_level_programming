#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of the array
 * @height: height of the array
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar2d;

	if  (width <= 0 || height <= 0)
		return (NULL);

	ar2d = malloc(sizeof(int *) * height);

	if (ar2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar2d[i] = malloc(sizeof(int) * width);

		if (ar2d[i] == NULL)
		{
			free(ar2d);

			for (j = 0; j <= i; j++)
				free(ar2d[j]);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar2d[i][j] = 0;
		}
	}

	return (ar2d);
}
