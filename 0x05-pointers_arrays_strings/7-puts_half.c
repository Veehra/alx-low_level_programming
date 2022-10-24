#include "main.h"
#include <string.h>
/**
 * puts_half - Entry point
 * @str: the pointer
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, length, two;

	length = strlen(str);

	if (length % 2 != 0)
	{
		two = (length + 1) / 2;
	}
	else
	{
		two = length / 2;
	}

	for (i = two; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
