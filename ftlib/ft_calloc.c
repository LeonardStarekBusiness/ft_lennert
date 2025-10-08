#include <limits.h>
#include <stdlib.h>

void* calloc(size_t nmemb, size_t size)
{
	void	*memory = malloc(nmemb*size);
	size_t 	i;

	i = 0;
	if (nmemb == 0 || nmemb == 0)
		return (NULL);
	/*if (size != 0 && nmemb > sizeof(size_t) / size)
        	return (NULL); */
	if (!memory)
		return (NULL);
	while (i < nmemb*size)
	{
		((char *)memory)[i] = 0;
		i++;
	}
	return (memory);
}
