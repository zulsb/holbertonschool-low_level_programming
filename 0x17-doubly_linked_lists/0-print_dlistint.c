#include "lists.h"

/**
  *print_dlistint - Prints all the elements of a list.
  *@h: Pointer variable const.
  *Return: elements.
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t rec;

	rec = 0;

	while (h != '\0')
	{
		printf("%i\n", h->n);
		h = (*h).next;
		rec++;
	}
	return(rec);
}
