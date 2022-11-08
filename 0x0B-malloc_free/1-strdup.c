#include "main.h"

/**
 * _strdup - Main entry point
 * @str: pointer
 *
 * Return: void
 */

char *_strdup(char *str)
{
	char *p;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	p[len] = '\0';

	return (p);
}
