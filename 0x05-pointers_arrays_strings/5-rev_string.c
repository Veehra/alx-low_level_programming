#include "main.h"
#include <string.h>
/**
 * rev_string - Entry point
 * @s: character
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int n, i;
	char one;

	n = strlen(s);

	for (i = 0; i < n / 2; i++)
	{
		one = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = one;
	}
}
