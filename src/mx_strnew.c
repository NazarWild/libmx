#include "../inc/libmx.h"

char *mx_strnew(const int size) {
char *str = NULL;

	if(size < 0) {
		return NULL;
	}
	else {
		str = (char *) malloc(1 *(size + 1));
		for(int i = 0;i < size ;i++) {
			str[i] = '\0';
		}
		str[size] = '\0';
	}
	return str;
}
