 #include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
	int i = 0;
	while(src && i < len) {
		dst[i] = src[i];
		i++;
	}

	if(src[i] == '\0') {
		for(int j = i; j < len; j++) {
			dst[j] = '\0';
		}
	}
	return dst;
}
