#include "holberton.h"

/**
  * get_bit - Function that returns the value of a bit at a given index.
  * @n: Variable to check
  * @index: Variable ti position.
  * Return: 0,1 or -1.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	if (n & (1 << index))
	{
		return (1);
	}

	return (0);
}
