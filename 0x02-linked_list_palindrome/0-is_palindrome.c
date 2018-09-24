#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
int llLength(listint_t **head);


/**
 * is_palindrome - checks if linked list if a palindrome
 * @head:  head of linked list
 * Return: 1 if palindrome, 0 if
 */
int is_palindrome(listint_t **head)
{
	int length = 0;

	if (*head == NULL || head == NULL)
		return (1);

    length = llLength(head);
    return length; 

}


/**
 * reverse - reverses the order of nodes starting with the pointer to head
 * @head:  pointer to the node you want to start the reversal at
 * Return: new head
 */
int llLength(listint_t **head)
{
	return 1;
}

