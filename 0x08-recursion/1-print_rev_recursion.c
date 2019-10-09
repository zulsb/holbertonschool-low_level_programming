#include "holberton.h"

/**
  *_print_rev_recursion - Function that prints a string in reverse.
  *@s: pointer
  */

void _print_rev_recursion(char *s)
{
	char *t = s + 1;

	if (*s != '\0')
	{
		_print_rev_recursion(t);
		_putchar(*s);
	}

}
