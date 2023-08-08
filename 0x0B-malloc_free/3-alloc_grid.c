#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: Pointer to the allocated 2D array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);
	return (NULL);
	}

	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}

	return (grid);
}
