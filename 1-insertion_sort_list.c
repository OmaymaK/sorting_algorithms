#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list using Insertion sort algorithm
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *swap, *tmp;

	if (!list || !*list)
		return;
	head = *list;
	while ((head = head->next))
	{
		swap = head;
		while (swap->prev && swap->n < swap->prev->n)
		{
			tmp = swap->prev;
			if (swap->next)
				swap->next->prev = tmp;
			if (tmp->prev)
				tmp->prev->next = swap;
			else
				*list = swap;
			tmp->next = swap->next;
			swap->prev = tmp->prev;
			swap->next = tmp;
			tmp->prev = swap;
			print_list(*list);
		}
	}
}
