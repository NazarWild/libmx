#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	if (!src)
		return NULL;
	const char *restrict new_src = NULL;
	char *new_dst = NULL;
	size_t i = 0;
	new_src = src;
	new_dst = dst;
	while(new_src[i] != c && i < n ) {
		new_dst[i] = new_src[i];
		i++;
	}
	new_dst[i] = c;
	if(new_src[i] == c) 
		return new_dst + i;
	else 
		return NULL;
}
