#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,
 size_t len);

int main(int ac, char **av)
{
	char *baal;
	if (ac == 4)
		baal = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
	else
		baal = "enter da shit";
	printf("%s\n", baal);
	free(baal);
}
