#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	const char *restrict new_src = NULL;
	char *new_dst = NULL;
	size_t i = 0;
	if (!src ) {
		return NULL;
	}
	new_src = src;
	new_dst = dst;
	while(i < n) {
		new_dst[i] = new_src[i];
		i++;
	}
	return new_dst;
}
