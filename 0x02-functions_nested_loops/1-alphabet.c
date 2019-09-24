#include "holberton.h"

/**
 * print_alphabet - Print alphabet a to z lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x = 'a';

	for (; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');

}
