#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
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
