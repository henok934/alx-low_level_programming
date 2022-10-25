#include "lists.h"
#include <stdio.h>
/**
* add_nodeint - function of the linkedlist
* @n: number of the the linkedlisti
* @head: is the head valu in the linkedlist
* Return: the head value of the list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return(NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
