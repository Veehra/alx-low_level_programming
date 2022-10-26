#include "main.h"

/**
 * string_toupper - Entry point
 *@str: string pointer
 * Return: coid;
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}

	return (str);
}
