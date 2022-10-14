#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
int j;
int k;
int l;
int ch1;
int ch2;

for (i = '0'; i <= '9'; i++)
{
	for (j = '0'; j <= '9'; j++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				ch1 = (i * 10) + j;
				ch2 = (k * 10) + l;

				if (ch1 < ch2)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (i == '9' && j == '8' && k == '9' && l == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');

return (0);
}
