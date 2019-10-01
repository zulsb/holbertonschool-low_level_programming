#include "holberton.h"

/**
  *swap_int - Swaps the values of two integers.
  *@a: First pointer
  *@b: second pointer
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
