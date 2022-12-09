#include "lists.h"
/**
 * add_dnodeint_end - main function
 * @head: variable used for add new node
 * @n: new node
 * Return:always success
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
			tempo = tempo->next;
		tempo->next = new;
		new->prev = tempo;
		*head = new;
	}
	return (new);
}
