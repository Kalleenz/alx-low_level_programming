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
		return (NULL);
	if (name == NULL || age == NULL || owner == NULL)
		printf("(nil)");

	printf("Name: %s\n", &name);
	printf("Age: %.1f\n", &age);
	printf("Owner: %s\n", &owner);
}
