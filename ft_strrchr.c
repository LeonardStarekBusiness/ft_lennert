/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:46:19 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/03 21:53:21 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*rstr;

	rstr = NULL;
	while (*str != 0)
	{
		if (*str == c)
			rstr = (char *)str;
		str++;
	}
	return (rstr);
}
