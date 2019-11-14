#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
	t_list *copy = *head;

	while(copy->next->next != NULL) {
		copy = copy->next;
	}
	free(copy->next);
	copy->next = NULL;
}
