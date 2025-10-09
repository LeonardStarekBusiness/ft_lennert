#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char *lol = ft_strtrim("DER TODE NAHT", " E");
	printf("%s\n", lol);
	return 0;
}
