#include "main.h"
/**
 * swap_int - Entry point
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
