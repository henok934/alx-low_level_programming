#include "lists.h"

/**
 * free_listint2 - frees a list_t linked list
 * @head: A pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;
	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = next_node;
}
