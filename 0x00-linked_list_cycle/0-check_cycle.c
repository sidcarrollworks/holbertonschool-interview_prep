#include "lists.h"

/**
 * check_cycle - Check for cycle in linked list
 * @list: linked list
 * Return: 0 if no cycle or 1 if cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *first;
	listint_t *second;
	int flag = 0;

	if (!list)
		return (0);

	second = list;
	first = list;

	while (second || first)
	{
		if ((second == first && flag == 1) || first->next == second)
			return (1);

		flag = 1;
		second = second->next;

		if (first->next && first->next->next)
			first = first->next->next;
		else
			return (0);
	}
	return (0);
}