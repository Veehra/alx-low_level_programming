#include "main.h"

/**
 * _strdup - Main entry point
 * @str: pointer
 *
 * Return: void
 */

char *_strdup(char *str)
{
	strdup(str);

	if (str == NULL)
		return (NULL);

	return (str);
}
