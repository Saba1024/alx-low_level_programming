#include "lists.h"

/**
 * free_listint.c - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
