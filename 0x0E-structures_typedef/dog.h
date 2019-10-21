#ifndef _mydog
#define _mydog
#include <stdio.h>


/**
  *struct dog - Structures
  *@name: pointer.
  *@age: varible float.
  *@owner: pointer.
  *Description: dogs information.
  */

struct dog
{
	char *name;
	float age;
	char *owner;

};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
#endif
