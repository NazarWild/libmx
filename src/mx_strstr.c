#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	int i = 0;
	int j = 0;
	int size_of_needle = mx_strlen(needle);
	int size_of_haystack = mx_strlen(haystack);
	while(i <= size_of_haystack) {
		while((haystack[i] - needle[j]) == 0) {
			j++;
		}
		if(j == size_of_needle) {
			return (char *) &haystack[i - size_of_needle + 1];
		}
		i++;
	}
	return 0;
}
