#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n){
	const char *news = s;
	size_t i = 0;

	while(i < n) {
		if(news[i] == c) {
			return (char *) &news[i];
		}
		i++;
	}
	return NULL;
}
