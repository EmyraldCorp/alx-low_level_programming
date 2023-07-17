#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memor allocated for a struct dog
 * @d: sturuct dog t free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
