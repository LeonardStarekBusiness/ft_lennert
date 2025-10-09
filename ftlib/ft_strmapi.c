#include <stdlib.h>

static int      stranglen(char const *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
                i++;
        return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned
 int, char))
{
	char		*rstr;
	unsigned int	i;

	rstr = malloc(stranglen(s) + 1);
	if (rstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		rstr[i] = f(i, s[i]);
		i++;
	}
	rstr[i] = 0;
	return (rstr);
}
