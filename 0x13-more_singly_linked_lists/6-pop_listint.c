#include "lists.h"
/**
  * pop_listint - Deletes the head node of a listint_t linked list.
  * @head: pointer variable type listint_t.
  * Return: nod or 0.
  */

int pop_listint(listint_t **head)
{
	listint_t *rec;
	int nod;

	if (*head == '\0')
	{
		rec = *head;
		*head = (*rec).next;
		nod = (*rec).n;

		free(rec);
		return (nod);
	}
	return (0);
}
