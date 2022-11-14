#ifdef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
