#include "main.h"
/**
 * _abs - absolute value integer
 * @i: name of integer
 * Return: Always 0
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
