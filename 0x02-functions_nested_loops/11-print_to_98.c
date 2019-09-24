#include "holberton.h"

/**
  * print_to_98 - All natural numbers from n to 98..
  *@n: Parameter
  * Return: Always 0 (Success)
  */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
	for (x = n; x >= 98; x--)
		{
		printf("%d, ", n);
		}
	}
	else
	(n < 98)
	{
	for (x = n; x <= 98; x++)
		{
		printf("%d, ", n);
		}
	}
	return (0);

}
