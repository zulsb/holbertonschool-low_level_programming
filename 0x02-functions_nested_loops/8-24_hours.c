#include "holberton.h"

/**
 * jack_bauer - Every minute of the day of Jack Bauer.
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i, j;
	for (i = 0; i <= 23; i++)
	{
	for (j = 0; j <= 59; j++)
	{
	_putchar(48 + i / 10);
	_putchar(48 + i % 10);
	_putchar(':');
	_putchar(48 + j / 10);
	_putchar(48 + j % 10);
	_putchar('\n');
	}
	}
}