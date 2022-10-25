#include "lists.h"

/**
 * free_listint - frees a list_t linked list
 * @head: A pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}

}
