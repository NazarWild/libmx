#include "../inc/libmx.h"

int mx_sqrt(int x) {
	int i;

		for(i = 1;i <= x/2;i++) {
			if(i == x / i) {
				return i;
			}
		}
		return 0;
}
