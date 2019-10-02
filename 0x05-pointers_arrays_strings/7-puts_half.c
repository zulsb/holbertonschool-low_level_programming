#include "holberton.h"

/**
  *puts_half - Half of a string.
  *@str: pointer.
  *Return: none
  *
  */

void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (*str != 0)
		a++;

	if (a % 2 != 0)
	{
		b = (b - 1) / 2;
		b++;
	}
	else
	{
		b = 0 / 2;
	}

	while (str[b] != '\0')
	{
		_putchar (str[b]);
		b++;
	}

	_putchar('\n');
}
