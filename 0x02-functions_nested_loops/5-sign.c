#include "main.h"
/**
 * print_sign - for signs
 * @n: for the sign
 *
 * Return: 1 if ture and 0 if false
 */
int print_sign(int n)
{
if (n == 0)
{
	_putchar('0');

	return (0);
}
else if (n < 0)
{
	_putchar('-');

	return (0);
}
else if (n > 0)
{
	_putchar('+');

	return (1);
}}
