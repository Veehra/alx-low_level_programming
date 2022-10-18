#include "main.h"
/**
 * times_table - for a time table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, k, first, last;


	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (k < 10)
				{
					_putchar(' ');
				}
			}

			if (k > 0)
			{
				first = k;

				while (first >= 10)
					first = first / 10;

				last = k % 10;

				_putchar(first + 48);
				_putchar(last + 48);
			}
			else
			{
				_putchar(k + 48);
			}
		}
		_putchar('\n');
	}
}
