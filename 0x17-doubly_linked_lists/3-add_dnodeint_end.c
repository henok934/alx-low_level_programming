#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add a node at the end of a double linked list
 * @head: header of double linked list
 * @n: number to set in a new node
 * Return: address of a new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tempo;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tempo = *head;
		while (tempo->next != NULL)
			tempo->next = tempo;
		tempo->next = new;
		new->prev = tempo;
		*head = new;
	}
	return (new);
}
