#include "main.h"

/**
 * wildcmp - Entry point
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: 1 or 0
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '*' && s2[1] != '\0')
		return (0);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == s2[0])
		return (wildcmp(&s1[1], &s2[1]));
	if (s2[0] == '*')
		return (wildcmp(&s1[0], &s2[1]) || wildcmp(&s1[1], &s2[0]));

	return (0);
}
