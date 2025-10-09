#include <limits.h>

void* ft_calloc(size_t nmemb, size_t size)
{
	void	*memory = malloc(nmemb*size);
	size_t 	i;

	i = 0;
	if (!memory)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (((nmemb * size) / nmemb) != size)
		return (NULL);
	while (i < nmemb*size)
	{
		((char *)memory)[i] = 0;
		i++;
	}
	return ((void *)memory);
}
