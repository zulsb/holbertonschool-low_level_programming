#include "holberton.h"

/**
  *_puts_recursion - Function that prints a string
  *@s: pointer.
  *
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');

}
