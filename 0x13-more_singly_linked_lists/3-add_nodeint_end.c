#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Double pointer variable type listint_t.
 * @n: const variable type int.
 * Return: pointer head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *rec, *saf;

	saf = *head;

	rec = malloc(sizeof(listint_t));
	if (rec == '\0')
		return ('\0');

	(*rec).n = n;
	(*rec).next = '\0';

	if (*head == '\0')
	{
		*head = rec;
		return (rec);
	}
	else
	{
		while ((*saf).next != '\0')
			saf = (*saf).next;
		(*saf).next = rec;
	}

	return (*head);
}
