#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void ft_striteri(char *s, void (*f)(unsigned int,
 char*));

void add(unsigned int i, char *c)
{
	*c += (char)i;
}

int main(void)
{
	char lol[] = "MOLOCH";
	printf("%s\n", lol);
	ft_striteri(lol, add);
	printf("%s\n", lol);
	return 0;
}
