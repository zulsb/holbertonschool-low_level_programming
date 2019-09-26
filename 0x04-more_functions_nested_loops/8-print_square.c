#include "holberton.h"

/**
 * print_square - Print square..
 *@size: i'm parameter.
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int j, x;

	for (j = 0; j < size; j++)
	{
		for (x = 0; x < size; x++)
		_putchar(35);
		_putchar('\n');
	}
	if (j == 0)
		_putchar('\n');
}
