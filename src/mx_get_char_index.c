#include "../inc/libmx.h"
 
int mx_get_char_index(const char *str, char c) {
    int i = 0;
    if(str != 0) {
        while(str[i]) {
            if(str[i] == c) {
                return i;
           	}
           	i++;
        }
    }
    else {
    	return -2;
    }
return -1;
}
