#include <stdio.h>
#include "holberton.h"

/**
 * main - Print numbers a 1 to 100 and fizzbuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 5) == 0 && (x % 3) == 0)
			printf("FizzBuzz ");
		else if ((x % 3) == 0)
			printf("Fizz ");
		else if ((x % 5) == 0)
			if (x == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else
			printf("%d ", x);

	}
	printf("\n");
	return (0);
}

