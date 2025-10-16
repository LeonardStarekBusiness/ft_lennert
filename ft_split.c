/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstarek <lstarek@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:36:20 by lstarek           #+#    #+#             */
/*   Updated: 2025/10/14 15:55:09 by lstarek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static void    *callocl(size_t nmemb, size_t size)
{
        void    *memory;
        size_t  i;

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


static int	len_until(char const *str, char del)
{
	int	i;

	i = 0;
	while (str[i] != 0 && str[i] != del)
	{
		i++;
	}
	return (i);
}

static void	advance(char **karre, char const *s, char c, int *pos)
{
	karre[pos[0]][pos[1]] = '\0';
        if (karre[pos[0]][0] != 0)
                pos[0] = pos[0] + 1;
        karre[pos[0]] = callocl(len_until(s, c) + 1, 1);
        pos[1] = 0;
}

static int	count_words(char const *s, char c)
{
	int	wc;
	int	expect_word;

	expect_word = 1;
	wc = 0;
	while (*s != 0)
	{
		if (*s == c)
			expect_word = 1;
		else if (expect_word)
		{
			expect_word = 0;
			wc++;
		}
		s++;
	}
	return (wc + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**rstr;
	int	*pos;

	pos = callocl(2, sizeof(int));
	rstr = callocl(count_words(s, c), sizeof(char *));
	if (rstr == NULL)
		return (NULL);
	rstr[pos[0]] = callocl(len_until(s, c) + 1, 1);
	while (*s != 0)
	{
		while (*s == c)
		{
			s++;
			advance(rstr, s, c, pos);
		}
		if (*s == '\0')
			break ;
		rstr[pos[0]][pos[1]] = *s;
		pos[1]++;
		s++;
	}
	advance(rstr, s, c, pos);
	rstr[pos[0]] = NULL;
	return (rstr);
}
