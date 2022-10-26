#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Entry point
 * @dest: First pointer
 * @src: Second pointer
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *i = strcat(dest, src);

	return (i);
}
