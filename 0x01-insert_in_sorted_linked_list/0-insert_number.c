#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - insert node into linekd list
 * @head: start of list
 * @number: number to insert
 * Return: new node of null if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode;
	listint_t *tmp;

	tmp = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = number;
	newNode->next = *head;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp)
	{
		if (number < tmp->n)
		{
			newNode->next = tmp;
			*head = newNode;
			return (newNode);
		}
		if (number > tmp->n && !tmp->next)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		if (tmp->next)
		{
			if (number > tmp->n && number <= tmp->next->n)
			{
				newNode->next = tmp->next;
				tmp->next = newNode;
				return (newNode);
			}
		}
		tmp = tmp->next;
	}
	return (newNode);
}