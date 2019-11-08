#include "holberton.h"

/**
  * flip_bits - Function that returns the number of bits.
  * @n: Variable type unsigned long integer.
  * @m: Variable type unsigned long integer.
  * Return: number of bits.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int rec = 0, poss;
	unsigned long int numberr;

	poss = (8 * sizeof(unsigned long int)) - 1;
	numberr = n ^ m;

	while (poss >= 0)
	{
		if (((numberr >> poss) & 1) == 1)
		{
			rec = rec + 1;
		}
	poss--;
	}
	return (rec);
}
