static double mx_pow(double n, int pow) {
	int i;
	double rez = n;

	if(pow == 0) {
		rez = 1;
	}
	else {
	for(i = 0;i < pow - 1;i++) {
		rez= rez * n;
	}
	}
	return rez;
}


unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long decimal = 0;
	int length = 0;
	int i;
	int pow;

	while(hex[length] != '\0') {
		length++;
	}
	pow = length - 1;
	for(i = 0;i < length;i++) {
		if(hex[i] >= '0' && hex[i] <= '9') {
			decimal = decimal + (hex[i] - 48) * mx_pow(16, pow - i );
		}
		else if(hex[i] >= 97 && hex[i] <= 122) {
			decimal = decimal + (hex[i] - 87) * mx_pow(16, pow - i); 

		}
		else if(hex[i] >= 65 && hex[i] <= 90) {
			decimal = decimal + (hex[i] - 55) * mx_pow(16, pow - i); 
		}

	}
	return decimal;
}

