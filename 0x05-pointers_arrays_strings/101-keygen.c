#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0;
 */

int main(void)
{
	int a, b;

	a = 0;

	srand((unsigned int)time(NULL));

	for (b = 0; b < 2772; b = b + a)
	{
		a = rand() % 120;

		if (a + b > 2772)
		{
			break;
		}
		printf("%c", a);
	}
	printf("%c\n", 2772 - b);

	return (0);
}
