#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	char *rezult = NULL;
	int i = 0;
	unsigned long buff = nbr;
	int size;
	int kek;

	while(buff/16 != 0) {
		i++;
		buff = buff / 16;
	}
	size = i;
	rezult = mx_strnew(size);
	for(i = size ;i >= 0;i--) {
		kek = nbr % 16;
		nbr = nbr/16;
		if(kek >= 0 && kek <= 9) {
			rezult[i] = kek + 48;
		}
		if(kek > 9 && kek <= 15) {
			rezult[i] = kek + 87;
		}
	}
	return rezult;
}
