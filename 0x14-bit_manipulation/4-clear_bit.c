#include "holberton.h"

/**
  * clear_bit - Function that sets the value of a bit to 0 at a given index.
  * @n: Variable to check.
  * @index: Variable to position.
  * Return: 1 or -1.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rec;

	rec = ~(1UL << index);

	if (index > 63)
	{
		return (-1);
	}

	*n = *n & rec;

	return (1);
}
