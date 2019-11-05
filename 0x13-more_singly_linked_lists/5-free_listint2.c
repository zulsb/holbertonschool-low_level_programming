#include "lists.h"
/**
  * free_listint2 - free the listint_t list 2.
  * @head: pointer variable type listint_t.
  * Return: nothing.
  */
void free_listint2(listint_t **head)
{
	listint_t *rec;

	while (*head != '\0' && head != '\0')
	{
		rec = *head;
		*head = (*rec).next;
		free(rec);
	}

}
