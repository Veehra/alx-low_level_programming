#include "main.h"
#include <string.h>
/**
 * puts2 - Entry point
 *
 * @str: the pointer to the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
