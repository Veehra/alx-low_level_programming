#include <string.h>
#include "main.h"
/**
 * print_rev - Entry point
 * @s: character
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
