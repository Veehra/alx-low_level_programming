#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * arg - Entry point
 * @argc: prints the number of argument
 * @argv: prints arg, in an array
 *
 * Return: 0;
 */

int arg(int argc, char __attribute__((unused)) *argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
