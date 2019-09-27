#include "holberton.h"

/**
 * print_triangle - Print triangle.
 *@size: i'm parameter.
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j;
	int space = size;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= space)
			_putchar('#');
		else
			_putchar(' ');
		}
			space--;
	_putchar('\n');
	}
}
