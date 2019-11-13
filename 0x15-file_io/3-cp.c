#include "holberton.h"
/**
  *main - Function that copies the content of a file to another file.
  *@argc: Variable count arguments.
  *@argv: Variable text.
  *Return: 0.
 */
int main(int argc, char *argv[])
{
	int arc1, arc2, rr, ww;
	char sto[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	arc1 = open(argv[1], O_RDONLY);
	if (arc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	arc2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (arc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((rr = read(arc1, sto, 1024) < 0);
	{
		ww = write(arc2, sto, rr);
	}
	if (rr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ww == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if ((close(arc1)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arc1), exit(100);
	if ((close(arc2)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arc2), exit(100);
	}
	return (0);
}
