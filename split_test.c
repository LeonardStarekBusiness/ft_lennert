#include <stdio.h>
#include <unistd.h>

char    **ft_split(char const *s, char c);

int main(int ac, char **av)
{
	char **popo;

	if (ac == 2)
		popo = ft_split(av[1], ' ');
	else if (ac == 1)
	{
		char buf[2056];
		ssize_t br = read(0, buf, 2056);
		buf[br] = 0;
		popo = ft_split(buf, ' ');
	}
	else
		popo = ft_split("enter input", ' ');
	while (*popo != NULL)
	{
		printf("[%s]\n", *popo);
		popo++;
	}
	printf("[%s]\n", *popo);
}
