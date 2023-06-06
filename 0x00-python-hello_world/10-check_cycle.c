#include "lists.h"

/**
 * check_cycle - determines if there is a cycle in a linked list
 * @list: linked list to test
 *
 * Return: 1 if the list contains a cycle, 0 else
 */
int check_cycle(listint_t *list)
{
	listint_t *slw = list;
	listint_t *fst = list;

	if (!list)
		return (0);

	while (slw && fst && fst->next)
	{
		slw = slw->next;
		fst = fst->next->next;
		if (slw == fst)
			return (1);
	}

	return (0);
}
