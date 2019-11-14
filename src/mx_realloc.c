#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	int size_new = size ;
	char *new_ptr;

	if(size == 0 && ptr != NULL) {
		free(ptr);
		return NULL;
	}
	else {
		new_ptr = mx_strnew(size_new);
	}
	if(ptr != NULL ) {
		mx_strcpy(new_ptr,ptr);
	}
	return new_ptr;
}
