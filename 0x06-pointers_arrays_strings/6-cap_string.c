#include "main.h"
#include <string.h>

/**
 * cap_string - Entry point
 * @str: pointer
 *
 * Return: nothing
 */

char *cap_string(char *str)
{
	int i, j, len;
	char l;
	char k = ' ';
	char all[13] = " ,;.!?\"(){}";

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (l != all[j])
			{
				continue;
			}
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				break;
			}
		}
		k = str[i];
	}

	return (str);
}

