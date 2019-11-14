#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
	int i = 0;
	int j = 0;
	int count = 0;
	if (!sub || !str){
		return -1;
	}
	int size_of_sub = mx_strlen(sub);
	int size_of_str = mx_strlen(str);
	while(i <= size_of_str) {
		if((str[i] - sub[j]) == 0){
    		j++;
		}
		else {
			j = 0;
		}
		if(j == size_of_sub) {
			count++;
			j = 0;
		}
		i++;
	}
	return count;
}
