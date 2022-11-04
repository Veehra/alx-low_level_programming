#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: integer
 * @argv: array
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 0;

	if (argc <= 2)
	{
		for (i = 0; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
}
