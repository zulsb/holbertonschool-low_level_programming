#include "holberton.h"

/**
 * times_table - Function that prints the 9 times table..
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int table, number;

	for (table = 0; table <= 9; table++)
	{
	for (number = 0; number <= 9; number++)
	{
	int r;

	r = table * number;
	if (number && r < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else if (r >= 10)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (r >= 10)
	{
	_putchar((r / 10) + '0');
	_putchar((r % 10) + '0');
	}
	else
	{
	_putchar(r + '0');
	}
	}
	_putchar('\n');
	}

