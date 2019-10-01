#include "holberton.h"

/**
  *print_rev - Prints a string in reverse..
  *@s: pointer
  *Return: none
  */

void print_rev(char *s)
{
	int x, size;

	size = 0;

	for (x = 0; s[x] != '\0'; ++x)
	{
		size++;
	}

	for (x = size - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
