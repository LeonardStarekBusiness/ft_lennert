#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char **ft_split(char const *s, char c);

int main(void)
{
	char **loln = ft_split("    ", ' ');
	int i = 0;
	while (loln[i] != NULL)
	{
		printf("%s\n", loln[i]);
		i++;
	}
	return 0;
}
