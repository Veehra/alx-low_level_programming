#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - Entry point
 * @s: the pointer
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int i, sign, length;
	unsigned int u;

	length = strlen(s);
	sign = 1;
	u = 0;

	for (i = 0; i < length; i++)
	{
		if (u > 0)
		{
			if (isdigit(s[i]) == 0)
			{
				break;
			}
		}
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			u = u * 10 + s[i] - '0';
		}
	}

	return (u * sign);
}

