#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	size_t i = 0;
	size_t j = 0;
	const char *newbig = big;
	const char *newlit = little;

	while(i <= big_len) {
		while((newbig[i] - newlit[j]) == 0) {
			j++;
		}
		if(j == little_len) {
			return (char *) &newbig[i - little_len + 1];
		}
		i++;
	}
	return 0;
}
