#include "main.h"
/**
 * more_numbers - to print numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k, l;

	for (l = 1; l <= 10; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i / 10;
			k = i % 10;
			if (i > 9)
			{
				_putchar(j + '0');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
