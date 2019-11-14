#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
	if(!str)
		return NULL;
	char *newbuff = NULL;
	int i = 0;
	int k = 0;
	int j = 0;
	int s = mx_strlen(str) - 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)){
		i++;
	}
	while(str[s] == 32 || (str[s] >= 9 && str[s] <= 13)){
		s--;
	}
	newbuff = mx_strnew(s - i + 1);
	for(j = i;k < (s - i + 1);j++,k++) {
		newbuff[k] = str[j];
	}
	return newbuff;
}
