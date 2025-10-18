/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:11:05 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/13 19:32:22 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	stranglen(char *strang)
{
	int	i;

	i = 0;
	while (strang[i] != '\0')
		i++;
	return (i);
}

char	*strnstr(const char *big, const char *little, size_t len)
{
	int		similarities;
	int		len;

	len = stranglen(little);
	similarities = 0;
	if (big == NULL || little == NULL || len == 0)
		return (big);
	while (*big != '\0' && len > 0)
	{
		if (*little == *big)
		{
			similarities++;
			little++;
		}
		else
		{
			little -= similarities;
			similarities = 0;
		}
		if (similarities == len)
			return (big - len + 1);
		big++;
		len--;
	}
	return (NULL);
}
