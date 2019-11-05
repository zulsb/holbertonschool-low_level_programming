#include "lists.h"
/**
 * free_listint - free the listint_t list
 * @head: pointer variable type listint_t.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *rec;

	while (head != '\0')
	{
		rec = (*head).next;
		free(head);
		head = rec;
	}

}
