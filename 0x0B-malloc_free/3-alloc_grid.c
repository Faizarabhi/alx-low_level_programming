#include "main.h"
/**
 * **alloc_grid - function
 * @width: width of array
 * @height: height of array
 * Return: return the aaray 2 demention.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(grid[j]);
				}
			free(grid);
			return (NULL);
			}
			for (j = 0; j < height; j++)
				grid[i][j] = 0;
	}
	return (grid);
}
