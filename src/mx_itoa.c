#include "../inc/libmx.h"

char *mx_itoa(int number) {
	char *result = NULL;
	int count = 0;
    int pow = 1;
    int buffer = number;
    int i = 0;
    while(number != 0) {
        number = number / 10;
        count++;
    	pow = pow * 10;
    }
    pow = pow / 10;
    if (buffer < 0) {
    	result = mx_strnew(count + 1);
        buffer = buffer * -1;
    	result[0] = '-';
       	i = 1;
       	count = count + 1;
    }
    else if ( buffer > 0) {
    	result = mx_strnew(count);
    }
    if(buffer == 0) {
        result[0] = '0';
    }
    if(buffer == -2147483648) {
    	return "-2147483648";
    }
    for(; i < count; i++) {
        result[i] = (buffer / pow + 48);
        buffer = buffer % pow;
        pow = pow / 10;
    }

    return result;
}
