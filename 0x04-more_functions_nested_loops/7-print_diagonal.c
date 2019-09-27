#include "holberton.h"

/**
 * print_diagonal - Print diagonal
 *@n: i'm parameter.
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
