#include "lists.h"

/**
  *dlistint_len - Returns the number of elements in a linked list.
  *@h: Pointer variable constant
  *Return: Number elements.
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t rec;

	rec = 0;

	while (h != '\0')
	{
		h = (*h).next;
		rec++;
	}
	return (rec);
}
