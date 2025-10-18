/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:13:29 by lstarek           #+#    #+#             */
/*   Updated: 2025/09/30 16:17:38 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = s;
	while (i < n)
	{
		ss[i] = c;
		i++;
	}
	return (ss);
}
