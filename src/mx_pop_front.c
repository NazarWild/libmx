#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
	t_list *first = *head;
	*head = (*head)->next;
	free(first->data);
	first->data = NULL;
}
