#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - Entry point
 * @haystack: string
 * @needle: substring
 *
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = strstr(haystack, needle);

	return (i);
}
