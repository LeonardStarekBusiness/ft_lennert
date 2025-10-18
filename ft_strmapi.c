/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:36:50 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/13 17:52:45 by lstarek          ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rstr;
	unsigned int	i;

	rstr = malloc(stranglen(s) + 1);
	if (rstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		rstr[i] = f(i, s[i]);
		i++;
	}
	rstr[i] = 0;
	return (rstr);
}
