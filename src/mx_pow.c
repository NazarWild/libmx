#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
	double rez = n;
	
	if(pow == 0) {
		rez = 1;
	}
	else {
		for(unsigned int i = 0;i < pow - 1;i++) {
			rez *= n;
		}
	}
	return rez;
}
