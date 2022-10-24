#include "main.h"
#include <string.h>
/**
 * _strcpy - Entry point
 * @dest: pointer
 * @src: pointer
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	char *i;

	i = strcpy(dest, src);

	return (i);
}
