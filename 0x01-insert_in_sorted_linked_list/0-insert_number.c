#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts a number into
 * a sorted singly linked list
 * @head: double pointer to start of list
 * @number: number to insert to node
 * Return: address of the new node, or NULL
 * if failed
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
		else if (number > tmp->n && !tmp->next)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		else if (tmp->next)
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