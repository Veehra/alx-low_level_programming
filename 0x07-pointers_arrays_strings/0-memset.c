#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - Entry point
 * @s: pointer
 * @b: pointer
 * @n: pointer
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
