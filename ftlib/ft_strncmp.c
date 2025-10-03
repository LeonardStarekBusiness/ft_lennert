#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(*s1 != 0 && *s2 != 0 && i < n)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		i++;
	}
	return ((int)(*s2 - *s1));
}
