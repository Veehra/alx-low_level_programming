#include "dog.h"

/**
 * free_dog - Entry point
 * @d: pointer
 *
 * return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
