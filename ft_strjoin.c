/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:36:41 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/13 17:53:21 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	stranglen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rstr;
	int		leng;
	int		i;

	leng = stranglen(s1) + stranglen(s2);
	rstr = malloc(leng + 1);
	i = 0;
	if (rstr == NULL)
		return (NULL);
	while (*s1 != 0)
	{
		rstr[i] = s1[0];
		i++;
		s1++;
	}
	while (*s2 != 0)
	{
		rstr[i] = s2[0];
		i++;
		s2++;
	}
	rstr[i] = 0;
	return (rstr);
}
