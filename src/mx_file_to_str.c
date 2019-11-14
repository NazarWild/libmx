#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
	if(!file)
		return NULL;
 	int stream = open(file, O_RDONLY);
 	int len = 0;
 	char c;
 	char *str = NULL;
 	if(stream <= 0) {
		return NULL;
	}
 	while(read(stream, &c, 1)) {
 		len++;
 	}
 	close(stream);
 	stream = open(file, O_RDONLY);
 	str = mx_strnew(len);
 	read(stream, str, len);
 	close(stream);
	return str;
}
