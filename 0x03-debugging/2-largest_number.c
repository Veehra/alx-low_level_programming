#include <stdio.h>
#include "main.h"

/**
 * largest_number - for the largest numbers
 *
 * @a: first input
 * @b: second input
 * @c: third input
 *
 * Return: Always 0
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
