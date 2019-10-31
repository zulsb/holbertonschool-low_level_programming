#include "lists.h"

/**
  *list_len - Numbers of elements
  *@h: pointer variable const
  *Return: numm.
  */

size_t list_len(const list_t *h)
{
	size_t num_e;

	num_e = 0;

	while (h != '\0')
	{
		h = h->next;
		num_e++;
	}
	return (num_e);
}
