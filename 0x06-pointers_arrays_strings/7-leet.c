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
	char capit[6] = {'A', 'E', 'O', 'T', 'L'};
	char small[6] = {'a', 'e', 'o', 't', 'l'};
	char num[6] = {'4', '3', '0', '7', '1'};

	len = strlen(str);

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == capit[j] || str[i] == small[j])
			{
				str[i] = num[j];
				break;
			}
		}

		return (str);
	}
}
