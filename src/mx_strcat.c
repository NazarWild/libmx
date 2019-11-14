 #include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
 	int a = 0;
 	int b = 0;
 	while (s1[a]) {
        a++;
    }
    while (s2[b]) {
        s1[a] = s2[b];
        a++;
        b++;
    }
    s1[a] = '\0';
    return s1;
}
