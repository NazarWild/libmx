#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
	int i = 0;
	int j = 0;
	if (!sub || !str){
		return -2;
	}
	int size_of_sub = mx_strlen(sub);
	int size_of_str = mx_strlen(str);
	while(i <= size_of_str) {
		while((str[i] - sub[j]) == 0){
			j++;
		}
		if(j == size_of_sub) {
			return (i - size_of_sub + 1);
		}
		i++;
	}
	return -1;
}
