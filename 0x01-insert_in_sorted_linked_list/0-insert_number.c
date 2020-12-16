#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to pointer of first element in singly linked list
 * @number: number to insert into linked list
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *tmp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;

	if (!tmp || tmp->n >= number)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	while (tmp && tmp->next && (tmp->next->n < number))
		tmp = tmp->next;

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
