#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a double linked list
 * @head: header of double linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tek;

	while (head)
	{
		tek = head->next;
		free(head);
		head = tek;
	}
	head = NULL;
}
