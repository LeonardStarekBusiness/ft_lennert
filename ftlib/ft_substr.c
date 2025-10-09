#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start,
 size_t len)
{
	char	*sstr;
	size_t	i;

	i = 0;
	sstr = malloc(len+1);
	if (sstr == NULL || s == NULL)
		return (NULL);
	s += start;
	while (i < len)
	{
		if (*s == 0)
			break;

		sstr[i] = *s;
		s++;
		i++;
	}
	sstr[i] = 0;
	return (sstr);
}
