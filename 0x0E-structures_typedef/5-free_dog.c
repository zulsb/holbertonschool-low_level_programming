#include "dog.h"
#include <stdlib.h>

/**
  *free_dog - Function that frees dogs.
  *@d: pointer dog.
  *Retunr: pointer d.
  */

void free_dog(dog_t *d)
{
	if (d != '\0')
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
