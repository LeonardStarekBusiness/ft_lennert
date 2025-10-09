#include <stdlib.h>

static int	is_in(char c, const char *str)
{
	while (*str != 0)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static int      stranglen(char const *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
                i++;
        return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rstr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	rstr = malloc(stranglen(s1) + 1);
	while (s1[i] != 0)
	{
		if (!(is_in(s1[i], set)))
		{
			rstr[j] = s1[i];
			j++;
		}
		i++;
	}
	rstr[j] = 0;
	return (rstr);
}
