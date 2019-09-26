#include "holberton.h"

/**
 * print_line - Print line..
 *@n: i'm parameter.
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int j;
	int x = 95;

	if (n > 0)
	{
	for (j = 0; j < n; j++)
		_putchar(x);
	}
	_putchar('\n');
}
