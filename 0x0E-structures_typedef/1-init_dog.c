#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - Initialize a variable of type struct dog.
  *@d: pointer.
  *@name: pointer name of dog.
  *@age: variable float age of dog.
  *@owner: pointer of dog.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
