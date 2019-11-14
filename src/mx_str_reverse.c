#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
	int i ;
	int size = 0;
	char swap;
	if(!s) {
		size = mx_strlen(s);
	    for(i = 0;i < size/2;i++){
	        swap = s[i];
	        s[i] = s[size - 1 - i];
	        s[size - 1 - i] = swap;
	    }
	}
}
