#include <stdio.h>
#include "lists.h"
/**
 * sum_listint.c- sum of the data in a linked list
 * @head: pointer to the headof the list
 * Return: sum of all the data (n) or 0
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
