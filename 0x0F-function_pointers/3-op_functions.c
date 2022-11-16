#include "3-calc.h"

/**
 * op_add - addition function
 * @a: first number
 * @b: second Number
 *
 * Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first number
 * @b: second number
 *
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first number
 * @b: second number
 *
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first number
 * @b: second number
 *
 * Return: div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Entry point
 * @a: first number
 * @b: second number
 *
 * Return: mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
