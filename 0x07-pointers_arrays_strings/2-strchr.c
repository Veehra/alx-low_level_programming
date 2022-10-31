#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - Entry point
 * @s: pointer
 * @c: integer
 *
 * Return: void
 */

char *_strchr(char *s, char c)
{
	char *v = strchr(s, c);

	return (v);
}
