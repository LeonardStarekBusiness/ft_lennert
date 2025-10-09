#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *ft_strjoin(char const *s1, char const *s2);

int main(void)
{
	char *lol = ft_strjoin("", "lo");
	printf("%s\n", lol);
	return 0;
}
