#include "function_pointers.h"

/**
  *print_name - Function that prints a name.
  *@name: pointer char.
  *@f: pointer.
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);

}
