#include "holberton.h"

/**
 * print_most_numbers - Print numbers 0 to 9 and don't print 2 and 4..
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
	if (x != '2' && x != '4')
	{
	_putchar(x);
	}
	}
	_putchar('\n');
}
