#include "main.h"
/**
 * free_grid - function
 * @grid: width of array
 * @height: height of array
 * Return: return the aaray 2 demention.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid != NULL)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}
