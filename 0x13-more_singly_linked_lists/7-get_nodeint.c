#include "lists.h"
/**
  *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
  *@head: pointer variable type listint_t.
  *@index: variable position node unsigned.
  *Return: .
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;
	listint_t *rec;

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
