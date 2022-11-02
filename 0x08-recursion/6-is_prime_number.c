#include "main.h"

/**
 * is_prime_number - Entry point
 * @n: number
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - Entry point
 * @i: number
 * @n: prime
 * Return: 1 or 0
 */

int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	else if ((n % i) == 0)
		return (0);
	return (check_prime(n, i + 1));
}
