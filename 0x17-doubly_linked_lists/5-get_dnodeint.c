#include "lists.h"

/**
  *get_dnodeint_at_index - Free the dlistint_t list 2.
  *@head: Pointer variable type dlistint_t.
  *@index: Position node.
  *Return: NULL if node doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *rec;

	s = 0;
	rec = head;

	while (rec != '\0')
	{
		if (s == index)
			return (rec);
		s++;
		rec = (*rec).next;
	}

	return (rec);

} 
