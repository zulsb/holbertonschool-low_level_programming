#include "holberton.h"

/**
  *binary_to_uint - Converts a binary number to an unsigned int.
  *@b: Variable const pointer.
  *Return: unsigned int rev.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sz, rev;

	sz = 0;
	rev = 0;

	if (b == '\0')
		return (0);

	while (b[sz] != '\0')
	{
		if (*(b + sz) != '0' && *(b + sz) != '1')
			return (0);

		rev <<= 1;
		if (b[sz] == '1')
			rev ^= 1;
		sz++;
	}

	return (rev);
}
