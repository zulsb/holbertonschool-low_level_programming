#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Sum positive numbers.
 * @argc: number of command line arguments.
 * @argv: array.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int count1, count2, sum;

	for (count1 = 1; count1 < argc; count1++)
	{
		for (count2 = 0; argv[count1][count2] != '\0'; count2++)
		if (isdigit(argv[count1][count2]))
		sum += atoi(argv[count1]);
		else
		{
		printf("Error\n");
		return (1);
		}
	}

	printf("%i\n", sum);
	return (0);
}
