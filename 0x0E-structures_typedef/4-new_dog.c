#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Entry point
 * @age: age
 * @name:name
 * @owner: owner
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL || !name || !owner)
	{
		free(dog);
		return (NULL);
	}

	name_len = strlen(name);
	owner_len = strlen(owner);

	dog->name = malloc(name_len + 1);
	dog->owner = malloc(owner_len + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);

		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;
	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
