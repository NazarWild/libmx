#include "../inc/libmx.h"
static int size_of_result(const char *str, char c) {
	int i = 0;
	int s = mx_strlen(str) - 1;
	int l = 0;
	int word = 0;
	if (!str) {
		return 0;
	}
	while(str[i] == c){
		i++;
	}
	while(str[s] == c){
		s--;
	}
	for(int j = i;j < (s - i + 1);j++) {
		if(str[j] == c) {
			l++;
		}
		if((str[j] == c) && word == 1) {
		 	word = 0;
		 }
		if((str[j] != c) && word == 0){
			word = 1;
			l--;
		}
	}
	return (s - i - l);
}
static char *mx_del_extra_spaces_forsplit(const char *str, char c) {
	char *dst;
	int k = 0;
	int word = 1;
	int i = 0;
	int size = size_of_result(str,c);
	dst = mx_strnew(size + 1);
	while(str[i] == c){
		i++;
	}
	for(int j = i; k < size; j++) {
		if((str[j] == c) && word == 1) {
		 	word = 0;
		 	dst[k] = c;
			k++;
		}
		else if(str[j] == c){
			continue;
		}
		if((str[j] != c) && word == 0){
			word = 1;
		}
		if(word == 1) {
			dst[k] = str[j];
			k++;
		}
	}
	dst[size] = c;
	return dst;
}
char **mx_strsplit(const char *s, char c) {
	if(!s)
		return NULL;
	int counter = 0;
	char **result;
	char *s_temp = mx_del_extra_spaces_forsplit(s,c);
	int k = 0;
	int kek = 0;
	int size = mx_count_words(s_temp,c) + 1;
	size -= 1;
	result = (char **)malloc(sizeof(char *) * size);
	if (!s) {
		return NULL;
	}
	for(int i = 0; i <= mx_strlen(s_temp);i++) {
		if(s_temp[i] != c) {
			counter++;
		}
		else if (s_temp[i] == c){
			char *str = mx_strnew(counter);
			for(int j = 0; j < counter; j++) {
				str[j] = s_temp[k];
				k++;
			}
			k++;
			result[kek] = str;
			kek++;
			counter = 0;
		}
	}
	result[size] = 0;
	return result;
}

