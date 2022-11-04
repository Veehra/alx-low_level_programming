#include "main.h"

/**
 * _isupper - to pick upperr case letter
 *
 * @c: for single character
 *
 * Return: 1if true, 0 if false
 *
 */



int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
