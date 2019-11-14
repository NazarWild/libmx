#include "../inc/libmx.h"
static int mini_quicksort(char **arr, int left, int right) {
 	int counter = 0;

    if (left < right)
    {
        int first = left;
        int last = right;
        int pivot = (first + last) / 2;
        while (first <= last) {
            while (mx_strlen(arr[first]) < mx_strlen(arr[pivot])) first++;
            while (mx_strlen(arr[last]) > mx_strlen(arr[pivot])) last--;
            if (first <= last)
            {
                char *tmp = arr[first];
                arr[first] = arr[last];
                arr[last] = tmp;
                first++;
                last--;
                counter++;
            }
        } 
        counter = counter + mini_quicksort(arr, first, right);
        counter = counter + mini_quicksort(arr, left, last);
    }
    else {
        return -1;
    }
    return counter;
}
int mx_quicksort(char **arr, int left, int right) {
	int ret = mini_quicksort(arr, left, right);
	return ret / 2;
}
