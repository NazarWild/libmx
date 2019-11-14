#include "../inc/libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
	char *buff = NULL;

	if(s1 == NULL && s2 == NULL)
		return NULL;
	if(s1 != NULL && s2 != NULL) {
		buff = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
		buff = mx_strcat(buff ,s1);
		buff = mx_strcat(buff ,s2);
	}
	else if(s2 == NULL)
		buff = mx_strdup(s1);
	else if(s1 == NULL)
		buff = mx_strdup(s2);
	return buff;
}
