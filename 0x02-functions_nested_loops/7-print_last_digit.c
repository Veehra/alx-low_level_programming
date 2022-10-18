#include "main.h"
/**
 * print_last_digit - to print last digit
 * @i: singlt character input
 *
 * Return: Always 0
 */
int print_last_digit(int i)
{
	int r = i % 10;

	if (r < 0)
	{
		r *= -1;
	}
	_putchar('r');

	return (r);
}
