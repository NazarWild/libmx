#include "../inc/libmx.h"

void mx_printstr(const char *s) {
	int i;

	for(i = 0; i < mx_strlen(s); i++) {
		write(1, &s[i], 1);
	}
}
