#include "../inc/libmx.h"
static int size_of_result(const char *str) {
	int i = 0;
	int s = mx_strlen(str) - 1;
	int l = 0;
	int word = 0;
	int j = 0;
	if (!str) {
		return 0;
	}
	while(str[i] == 32 || (str[i] >= 8 && str[i] <= 13)){
		i++;
	}
	while(str[s] == 32 || (str[s] >= 8 && str[s] <= 13)){
		s--;
	}
	for(j = i;j < (s - i + 1);j++) {
		if(str[j] == 32 || (str[j] >= 8 && str[j] <= 13)) {
			l++;
		}
		if((str[j] == 32 || (str[j] >= 8 && str[j] <= 13)) && word == 1) {
		 	word = 0;
		 }
		if((str[j] != 32 || (str[j] < 8 && str[j] > 13 )) && word == 0){
			word = 1;
			l--;
		}
	}
	return (s - i - l);
}
char *mx_del_extra_spaces(const char *str) {
	char *dst;
	char *ds;
	int k = 0;
	int word = 1;
	int i = 0;
	int size = 0;
	if(!str) {
		return NULL;
	}
	size = size_of_result(str);
	dst = mx_strnew(size);
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)){
		i++;
	}
	for(int j = i; k < size; j++) {
		if((str[j] == 32 || (str[j] >= 9 && str[j] <= 13)) && word == 1) {
		 	word = 0;
		 	dst[k] = 32;
			k++;
		}
		else if(str[j] == 32 || (str[j] >= 9 && str[j] <= 13 )){
			continue;
		}
		if((str[j] != 32 || (str[j] < 9 && str[j] > 13 )) && word == 0){
			word = 1;
		}
		if(word == 1) {
			dst[k] = str[j];
			k++;
		}
	}
	ds = mx_strtrim(dst);
	free(dst);
	return ds;
}
