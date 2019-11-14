#include "../inc/libmx.h"

static size_t len(const char *s) {
size_t i = 0;	

	while(s[i] != '\0') {
		i++;
	}
	return i;
}

char *mx_strndup(const char *s1, size_t n) {
	if(!s1 || n == 0)
		return NULL;
	char *dup;
	size_t length = len(s1);
	if(n > length) 
		return NULL;
	if(n <= length) {
		dup = mx_strnew(n);
		for(size_t i = 0;i < n;i++) {
			dup[i] = s1[i];
		}
   	}
   	else {
   		dup = mx_strnew(length);
		for(size_t i = 0;i < length;i++) {
			dup[i] = s1[i];
		}
   	}
	return dup;
 }
