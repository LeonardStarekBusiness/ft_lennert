#include <stdio.h>

char    **ft_split(char const *s, char c);

int main(int ac, char **av)
{
	char **popo;

	if (ac == 2)
		popo = ft_split(av[1], ' ');
	else
		popo = ft_split("enter input", ' ');
	while (*popo != NULL)
	{
		printf("-->%s<--\n", *popo);
		popo++;
	}
	printf("-->%s<--\n", *popo);
}
