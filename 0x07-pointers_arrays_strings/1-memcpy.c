#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - Entry point
 * @dest: pointer
 * @src: integer
 * @n: integer
 *
 * Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
