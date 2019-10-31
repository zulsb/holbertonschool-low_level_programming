#include "lists.h"

/**
  *list_len - Numbers of elements
  *@h: pointer variable const
  *Return: numm.
  */

size_t list_len(const list_t *h)
{
	size_t numm;

	numm = 0;

	if (h != '\0')
	{
		h = h->next;
		numm++;
	}
	return (numm);
}
