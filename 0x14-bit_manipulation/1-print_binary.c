#include "holberton.h"

/**
  *print_binary - Prints the binary representation of a number.
  *@n: variable unsigned long int.
  */

void print_binary(unsigned long int n)
{
	unsigned long int rec;
	int s;

	s = 0;
	rec = 1UL << 8 * (sizeof(unsigned long int) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (rec > 0)
	{
		if (rec & n)
		{
			_putchar('1');
			s = 1;
		}
		else if (s)
		{
			_putchar('0');
		}

	rec = rec >> 1;
	}
}
