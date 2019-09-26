#include "holberton.h"

/**
 * print_numbers - Print numbers 0 to 9.
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
