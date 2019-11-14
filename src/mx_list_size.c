#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
 	int counter = 1;
	t_list *copy = list;
	
	while(copy->next != NULL) {
		copy = copy->next;
		counter++;
	}
	return counter;
}
