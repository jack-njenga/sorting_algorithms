#include "main.h"
/**
 * 
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *current;
	listint_t *p;


	if (*list == NULL || (*list)->next == NULL)
		return;

	while (*list)
	{
		current = *list;
		*list = (*list)->next;
		if (head == NULL || current->n < head->n)
		{
			printf("head is null\n");
			current->next=head;
			head = current;
			print_list(head);
		}
		else
		{
			printf("else\n");
			p = head;
			while(p != NULL)
			{
				if (p->next == NULL || current->n < p->next->n)
				{
					printf("else --- if\n");
					current->next = p->next;
					p->next = current;
					print_list(head);
					break;
				}
				p = p->next;
			}
		}
		
	}
	*list = head; 
}