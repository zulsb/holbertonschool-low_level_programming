#include "lists.h"

/**
  *free_list - Function that frees a list.
  *@head: pointer variable type list_t.
  *Return: pointer head.
  */

void free_list(list_t *head)
{
	if (head == '\0')
	return;

	while (head != '\0')
	{
	free_list(head->next);
	free(head->str);
	}
	free(head);

}
