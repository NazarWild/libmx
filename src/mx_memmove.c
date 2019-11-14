#include "../inc/libmx.h"

static void *cpy(unsigned char *d_str1, unsigned char *s_str2, size_t len, int sign) {
	size_t	i;

	i = 0;
	while (i < len)
	{
		*d_str1 = *s_str2;
		d_str1 += sign;
		s_str2 += sign;
		i++;
	}
	return (d_str1);
}

void *mx_memmove(void *dst, const void *src, size_t len) {
	size_t	i;
	int	sign;
	unsigned char *d_str1;
	unsigned char *s_str2;
	unsigned char *buffer;

	i = 0;
	sign = 0;
	buffer = (unsigned char *)dst;
	d_str1 = (unsigned char *)dst;
	s_str2 = (unsigned char *)src;
	if (dst < src)
	{
		sign = 1;
	}
	else if (dst > src)
	{
		sign = -1;
		d_str1 = (unsigned char *)dst + len - 1;
		s_str2 = (unsigned char *)src + len - 1;
	}
	else
		return (d_str1);
	cpy(d_str1, s_str2, len, sign);
	return (buffer);
}

