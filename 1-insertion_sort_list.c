#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: A double pointer to the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *swap, *next;

	if (!(*list))
		return;

	swap = (*list)->next;
	while (swap)
	{
		next = swap->next;
		while (swap->prev && swap->prev->n > swap->n)
		{
			swap->prev->next = swap->next;
			if (swap->next)
				swap->next->prev = swap->prev;

			swap->next = swap->prev;
			swap->prev = swap->next->prev;
			swap->next->prev = swap;

			if (!swap->prev)
				*list = swap;
			else
				swap->prev->next = swap;
			print_list(*list);
		}
		swap = next;
	}
}
