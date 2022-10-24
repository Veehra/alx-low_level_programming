#include "main.h"
/**
 * _strlen - Entry point
 * @s: character
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
