#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - functions of the linkdlist
 * @head: is aheain of the variable
 * @n: used for variable number
 * Return: always success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *traverse;
	
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new_node;
	}

	return (*head);
}
