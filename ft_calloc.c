/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:35:40 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/13 17:50:09 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	i;

	memory = malloc(nmemb * size);
	i = 0;
	if (!memory)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (((nmemb * size) / nmemb) != size)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)memory)[i] = 0;
		i++;
	}
	return ((void *)memory);
}
