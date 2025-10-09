#include <stdlib.h>

static int      stranglen(char const *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
                i++;
        return (i);
}


char **ft_split(char const *s, char c)
{
	char	**rstr;
	int	leng;
	int	word;
	int	letter;

	word = 0;
	letter = 0;
	leng = stranglen(s);
	rstr = malloc(leng+1);
	rstr[0] = malloc(leng+1);
	while (*s != 0)
	{
		if (*s == c)
		{
			rstr[word][letter] = 0;
			letter = 0;
			word++;
			rstr[word] = malloc(leng+1);
		}
		else
		{
			rstr[word][letter] = *s;
			letter++;
		}
		s++;
	}
	rstr[word][letter] = 0;
	rstr[word + 1] = NULL;
	return (rstr);
}
