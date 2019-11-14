#include "../inc/libmx.h"

 void mx_print_strarr(char **arr, const char *delim) {
 	int i = 0;
 	int j = 0;
 	
		while(arr[j] != 0){
		 	j++;
		}
		for(i = 0; i < j; i++) {
			write(1, arr[i], mx_strlen(arr[i]));
			if(i < j - 1) {
				write(1, delim, mx_strlen(delim));
			}
		}
	write(1, "\n", 1);
}
