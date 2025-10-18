/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:54:33 by lstarek           #+#    #+#             */
/*   Updated: 2025/09/09 19:54:34 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	minus_counter;
	int	sum;

	i = 0;
	minus_counter = 0;
	sum = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_counter += 1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		sum = (sum * 10) + str[i] - 48;
		i++;
	}
	if (minus_counter % 2 == 1)
		return (-sum);
	else
		return (sum);
	return (0);
}
