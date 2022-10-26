#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Entry point
 * @dest: pointer
 * @n: pointer
 * @src: pointer
 *
 * Return: nothing
 */

char *_strncat(char *dest, char *src, int n)
{
	char *v = strncat(dest, src, n);

	return (v);
}
