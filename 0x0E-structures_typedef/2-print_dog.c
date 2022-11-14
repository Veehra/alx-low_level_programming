#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 *
 * @d: pointer
 *
 * Return: a pointer
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Name: %f\n", d->age);

		if (d->owner)
			printf("Owner.name: %s\n", d->owner);
		else
			printf("Name: (nil)\n");
	}
}
