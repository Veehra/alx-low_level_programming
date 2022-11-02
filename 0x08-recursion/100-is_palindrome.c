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
	return (check_palindrome(s, 0));
}


/**
 * check_palindrome - Entry point
 * @s: pointer
 * @i: count
 *
 * Return: 1 or 0
 */

int check_palindrome(char *s, int i)
{
	int len = strlen(s);

	if (i == len)
		return (1);
	else if (s[i] != s[len - 1 - i])
		return (0);
	else
		return (check_palindrome(s, i + 1));
}
