#include "../inc/libmx.h"

int mx_bubble_sort(char **arr,int size) {
int i;
int j;
char *swap = 0;
int counter = 0;

	for(i = 0;i < size;i++) {
		for(j = 0;j < size - 1;j++) {
			if(mx_strcmp(arr[j],arr[j + 1]) > 0) {
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
				counter++;
			}
		}
	}	
	return counter;
}

