#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - print result
  *@argc: argument count number
  *@argv: array value
  *Return: always 0.
  */

int main(int argc, char *argv[])
{
	int num1, num2, r;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);

	if (p == '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((p == op_div || p == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	r = p(num1, num2);
	printf("%d\n", r);

	return (0);
}
