#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - Entry point
 * @s: pointer
 * @accept: pointer
 *
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
