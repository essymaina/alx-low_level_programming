#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Prints a grid of integers
 * @width: width of the grid
 * @height: height of the world
 *
 * Return: pointer to the array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
		array = (int **)malloc(height * sizeof(int));
		if (array == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(width * sizeof(int));
			if (array[i] == NULL)
			{
				while (i--)
				{
					free(array[i]);
				}
				free(array);

				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		return (array);
}
