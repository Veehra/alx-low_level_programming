#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_diagsums - Entry point
 * @a: pointer
 * @size: integer
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, first, second;

	first = 0;
	second = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			first = first + a[i];
		}
		if (i != 0 && i % (size - i) == 0 && i < (size * size) - size + 1)
		{
			second = second + a[i];
		}
	}

	printf("%d, %d\n", first, second);
}
