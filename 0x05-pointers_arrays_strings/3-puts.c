#include "holberton.h"

/**
  *_puts - Prints a string.
  *@str: pointer
  *Return: none
  */

void _puts(char *str)
{
	int x;

	while (*str + x != '\0')
	{
		_putchar(*str + x);
		x++;
	}
	_putchar('\n');
}
