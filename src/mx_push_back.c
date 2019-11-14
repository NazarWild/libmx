#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
	if(*list == 0) {
		*list = mx_create_node(data);
		return;
	}
	t_list *copy = *list;

	while(copy->next != NULL) {
		copy = copy->next;
	}
	copy->next = mx_create_node(data);
	copy = copy->next;
}
