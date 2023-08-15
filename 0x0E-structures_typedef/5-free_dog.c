#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - here to free some dogs
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (*d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
