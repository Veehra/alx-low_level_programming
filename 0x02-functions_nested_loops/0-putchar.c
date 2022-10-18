#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the charaar c to stdout
 * @c:  The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	int i;
	char s[8] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}
