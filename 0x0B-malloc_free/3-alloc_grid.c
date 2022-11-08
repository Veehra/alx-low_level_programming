#include "main.h"

/**
 * alloc_grid - Entry point
 * @width: for the width
 * @height: for height
 *
 * Return: 0 or NULL
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * (height));

	if (p == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (y = 0; y < x; x++)
				free(p[y]);
			free(p);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			p[x][y] = 0;
	}

	return (p);
}
