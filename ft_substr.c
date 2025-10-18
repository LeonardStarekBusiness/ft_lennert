/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:37:19 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/13 17:38:43 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	i;

	i = 0;
	sstr = malloc(len + 1);
	if (sstr == NULL || s == NULL)
		return (NULL);
	s += start;
	while (i < len)
	{
		if (*s == 0)
			break ;
		sstr[i] = *s;
		s++;
		i++;
	}
	sstr[i] = 0;
	return (sstr);
}
