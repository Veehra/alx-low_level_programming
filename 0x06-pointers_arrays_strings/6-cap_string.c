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
	int i, len;
	char k = ' ';
	char all[13] = " ,;.!?\"(){}";

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] == all[13])
		{
			str[i] = str[i] - 32;
		}
		else
		{
			k = str[i];
		}
	}

	return (str);
}
