#include "main.h"
#include <string.h>

/**
 * leet - Entry point
 *
 * @str: pointer
 *
 * Return: nothing
 */
char *leet(char *str)
{
	int i, j, len;
	char capit[5] = {'A', 'E', 'O', 'T', 'L'};
	char small[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	len = strlen(str);

	for (i = 0; i < 5; i++)
	{
		if (str[i] == capit[j] && str[i] == small[j])
		{
			str[i] = num[j];
		}
	}

	return (str);
}
