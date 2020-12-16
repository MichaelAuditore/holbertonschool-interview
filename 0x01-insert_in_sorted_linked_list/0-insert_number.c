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
	listint_t *new, *tmp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;

	tmp = *head;
	if (!tmp)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		while (tmp)
		{
			if (tmp->n <= new->n && tmp->next->n > new->n)
			{
				break;
			}
			tmp = tmp->next;
		}
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
