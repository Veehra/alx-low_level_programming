#include "main.h"

/**
 * reverse_array - Entry point
 * @a: array pointer
 * @n: integer
 *
 * Return: void;
 */

void reverse_array(int *a, int n)
{
	int i, v;

	for (i = 0; i < n / 2; i++)
	{
		v = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = v;
	}
}
