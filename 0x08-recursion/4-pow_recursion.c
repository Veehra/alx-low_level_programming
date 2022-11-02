#include <math.h>
#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Entry point
 * @x: first integer
 * @y: second integer
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	pow(x, y);
}
