#include "main.h"

/**
 * string_nconcat - Entry point
 * @s1: the first string
 * @s2: the second string
 * @n: bytes in the second string and first
 *
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1, len2;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	s = malloc((len1 + n + 1) * sizeof(char));
	
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < n && len2 != 0; i++)
	{
		s[i + len1] = s2[i];

		if (s2[i] == '\0')
		{
			i++;
			break;
		}
	}
	while (i < n)
	{
		s[i + len1] = '\0';
		i++;
	}
	s[i + len1] = '\0';

	return (s);
}
