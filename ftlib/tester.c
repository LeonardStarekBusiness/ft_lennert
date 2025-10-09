#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd);

int main(void)
{
	int i = open("baal.txt", O_CREAT | O_WRONLY, 0644);
	ft_putstr_fd("here", i);
	return 0;
}
