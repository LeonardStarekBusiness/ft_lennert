/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:11:05 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/13 19:02:23 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	abso(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	powten(int n)
{
	int	i;
	int	ten;

	i = 0;
	ten = 1;
	while (i < n)
	{
		ten *= 10;
		i++;
	}
	return (ten);
}

static int	numlen(int n)
{
	int	i;

	i = 1;
	while (powten(i) < abso(n))
	{
		i++;
	}
	return (1 + i + (n < 0));
}

char	*ft_itoa(int n)
{
	char	*fstr;
	int		turn;
	int		leng;

	leng = numlen(n);
	turn = 0;
	fstr = malloc(leng);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		fstr[0] = '-';
	n = abso(n);
	while (n / powten(turn) > 0)
	{
		fstr[leng - 2 - turn] = ((n % powten(turn + 1)) / powten(turn)) + 48;
		turn++;
	}
	fstr[leng - 1] = 0;
	return (fstr);
}
