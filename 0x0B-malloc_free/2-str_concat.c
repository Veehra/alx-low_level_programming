#include "main.h"

/**
 * str_concat - MainPoint
 * @s1: first string
 * @s2: second string
 *
 * Return: void
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
		j = 0;
	else
		j = strlen(s1);

	if (s2 == NULL)
		k = 0;
	else
		k = strlen(s2);

	p = malloc(sizeof(char) * (j + k + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		p[i] = s1[i];
	for (i = 0; i < k; i++)
		p[i + j] = s2[i];

	l = strlen(p);
	p[l] = '\0';

	return (p);
}
