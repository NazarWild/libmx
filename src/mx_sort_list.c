#include "../inc/libmx.h"
// static bool cmp(void *s1, void *s2) {
//     unsigned int i = 0;
//     char *str1 = (char *) s1;
//     char *str2 = (char *) s2;
//     while(str1[i] && str2[i]) {   
//         if (str1[i] > str2[i]) return true;
//         i++;
//     }
//     return false;
// }

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	t_list *i = lst;
	t_list *j = lst->next;
	char *swap = NULL;

	for(i = lst;i != NULL;i = i->next) {
		for(j = i -> next; j != NULL; j = j->next) {
			if((* cmp)(i->data , j->data)) {
				swap = i->data;
				i->data = j->data;
				j->data = swap;
			}
		}
	}
	return lst;
}
