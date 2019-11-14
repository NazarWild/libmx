#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	if (!str || !sub || !replace)
		return NULL;
	int index = 0;
	int i = 0;
	int k = 0;
	int j = 0;
	int size_of_sub = mx_strlen(sub);
	int size_of_str = mx_strlen(str);
	int size_of_replace = mx_strlen(replace);
	int size = size_of_str - (mx_count_substr(str,sub) * size_of_sub) + (mx_count_substr(str,sub) * size_of_replace);
	char *result = mx_strnew(size);
	index = mx_get_substr_index(str, sub);
	while(index != -1) {
		while(k < index) {
				result[i] = str[k];
				k++;
				i++;
		}
		k = 0;
		if(i >= index && i < size) {
			while(replace[j]) {
				result[i] = replace[j];
				j++;
				i++;
			}
			j = 0;
		}
		str = mx_strstr(str,sub) + size_of_sub;
		index = mx_get_substr_index(str, sub);
	}
	while(i < size) {
		result[i] = str[k];
		i++;
	   	k++; 
	}
	return result;
}
