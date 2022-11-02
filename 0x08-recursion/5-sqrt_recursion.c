#include "main.h"

/**
 * _sqrt_recur - Entry point
 * @num: the number
 * @find: our counter
 *
 * Return: 0;
 */

int _sqrt_recur(int num, int find)
{
	if ((find * find) == num)
		return (find);
	else if ((find * find) > num)
		return (-1);
	return (_sqrt_recur(num, find + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: number
 *
 * Return: int root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recur(n, 0));
}
