#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: A double pointer to the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *curr;
	int n1, n2;

	if (!(*list) || !(*list)->next)
		return;
	curr = (*list)->next;

	while (curr)
	{
		tmp = curr->next;
		n1 = curr->prev->n;
		n2 = curr->n;
		/*printf("n1 : %d\nn2 : %d\n\n", n1, n2);*/

		while (curr->prev && n1 > n2)
		{
			curr->prev->next = tmp;
			if (curr->next)
				curr->next->prev = curr->prev;
			curr->next = curr->prev;
			curr->prev = curr->next->prev;
			curr->next->prev = curr;

			if (curr->prev == NULL)
				*list = curr;
			else
				curr->prev->next = curr;
		}
		print_list(*list);
		curr = tmp;
	}
}
