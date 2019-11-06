#include "lists.h"
/**
  *delete_nodeint_at_index - Deletes the node at index index of a listint_t.
  *@head: Double pointer variable type listint_t.
  *@index: Variable index to the list.
  *Return: 1 or -1.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *rec, *next;
	unsigned int s;

	if (*head == '\0')
		return (-1);
	rec = *head;
	if (index == 0)
	{
		*head = (*rec).next;
		free(rec);
		return (1);
	}
	for (s = 0; rec != '\0' && s < (index - 1); s++)
	{
		rec = (*rec).next;
	}
	if (rec == '\0' || (*rec).next == '\0')
		return (-1);

	next = rec;
	next = rec->next->next;
	free((*rec).next);
	(*rec).next = next;
	return (1);
}
