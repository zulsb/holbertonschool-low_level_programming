#include "holberton.h"

/**
  * print_alphabetx10 - Print alphabet a to z lowercase 10 times
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	char x = 'a';
	int y;

	for (y = 0; y < 10; y++)

	{
	for (; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	}
}
