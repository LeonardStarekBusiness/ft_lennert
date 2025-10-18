/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:11:05 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/03 21:50:24 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		found_father;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	found_father = 0;
	while (i < size)
	{
		if (src[i] == '\0' || found_father)
		{
			dst[i] = '\0';
			found_father = 1;
		}
		else
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
