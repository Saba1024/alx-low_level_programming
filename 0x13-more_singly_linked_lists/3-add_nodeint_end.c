#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be use as content
 *
 * Return: address of the newly addded node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	
	new->n = n;
	new->next = *head;
	*head = new;
	
	return (new);
}
