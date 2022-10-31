#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Entry point
 * @s: pointer
 * @accept: pointer
 *
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	char *i = strpbrk(s, accept);

	return (i);
}
