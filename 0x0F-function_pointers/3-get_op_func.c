#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "string.h"

/**
  *get_op_func - Selects the correct function to perform the operation.
  *@s: pointer char.
  *Return: null.
  *
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
};
	int i;

	while (i < 6)
	{
	if (strcmp(s, ops[i].op) == 0)
	{
		return (ops[i].f);
	}
	i++;
	}
	return (NULL);
}
