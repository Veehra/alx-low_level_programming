#include "main.h"
/**
 * print_alphabet_x10 - used to print alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n, i;

	n = 0;
	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar('\n');
	}
}
