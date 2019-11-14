#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
	size_t i = 0;
	const char *cmp1 = s1;
	const char *cmp2 = s2;
	
	while(cmp1[i] && cmp2[i] && cmp1[i] == cmp2[i] && i < n){
		i++;
	}
	return (cmp1[i] - cmp2[i]);
}
