#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - Entry point
 * @dest: pointer
 * @n: integer
 * @src: pointer
 *
 * Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *i = strncpy(dest, src, n);

	return (i);
}
