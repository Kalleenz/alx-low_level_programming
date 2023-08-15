#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - printing the credentials of a dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)");
	if (d->owner == NULL)
		printf("(nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
