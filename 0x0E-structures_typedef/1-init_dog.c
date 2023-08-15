#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function to initialize a struct datat type
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: user
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
