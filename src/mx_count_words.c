#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
	int i = 0;
	int count = 0;
	bool word = false;
	if (!str) {
		return -1;
	}
	while(str[i]) {
		if(str[i] == c && word){
    		word = false;
    	}
       	else if(!word && str[i]  != c ) {
    		word = true;
    		count++;
		}
		i++;
	}
	return count;
}
