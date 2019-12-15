#include "lists.h"

/**
  *free_dlistint - free the dlistint_t list.
  *@head: pointer variable type dlistint_t.
  *Return: nothing.
  *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *rec;

	while (head != '\0')
	{
		rec = (*head).next;
		free(rec);
		head = rec;
	}

}
