#include "main.h"
/**
 * free_grid - Entry point
 * @grid: poniter to a pointer
 * @height: integer
 *
 * Return: nothin
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
