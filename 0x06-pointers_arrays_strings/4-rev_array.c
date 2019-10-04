#include "holberton.h"

/**
  *reverse_array - Function that reverses the content of an array of integers.
  *@a: pointer.
  *@n: variable.
  *Return: 0
  */

void reverse_array(int *a, int n)
{
	int x, b, temp;

	b = n - 1;

	for (x = 0; x < b; x++, b--)
	{
		temp = a[x];
		a[x] = a[b];
		a[b] = temp;
	}
}
