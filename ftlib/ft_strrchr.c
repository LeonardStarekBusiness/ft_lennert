#include <stdlib.h>

char *ft_strrchr(const char *str, int c)
{
	char* rstr = NULL;
	while (*str != 0)
	{
		if (*str == c)
			rstr = (char*)str;
		str++;
	}
	return (rstr);
}
