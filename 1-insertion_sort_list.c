#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: a pointer of the head of a double list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->next;
		prev = current->prev;
		while (prev != NULL && prev->n > current->n)
		{
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;
			current->next = prev;
			current->prev = prev->prev;
			prev->prev = current;
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;
			prev = current->prev;
			print_list(*list);
		}

		current = temp;
	}
}
