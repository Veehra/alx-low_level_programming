#include "main.h"
#include <string.h>

/**
 * is_palindrome - Entry point
 * @s: string palindrome
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int f, l, len;

	f = 0;
	l = len - 1;
	len = strlen(s);

	if (f == l)
		return (1);
	else if (f > l)
		return (1);
	else if (s[f] != s[l])
		return (0);
	return (is_palindrome(s + (f + 1) + (l - 1)));
}
