#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	const char *news = s;
	int i = n;

	while(i >= 0) {
		if(news[i] == c) {
			return (char *) &news[i];
		}
		i--;
	}
	return NULL;
}
