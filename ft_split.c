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
	//printf("%d %s %c\n", i, str, del);
	return (i);
}

//del am anfang und ende fixen
//25 zeilen !!!!!!!!111!1!!!!11!!111!
//erstes Malloch optimieren (für den karre zeiger zeiger)
char	**ft_split(char const *s, char c)
{
	char	**rstr;
	int	word;
	int	letter;

	word = 0;
	letter = 0;
	rstr = callocl(len_until(s, '\0') + 1, sizeof(char *));
	rstr[word] = callocl(len_until(s, c) + 1, 1);
	while (*s != 0)
	{
		if (*s == c)
		{
			while (*s == c && *s != '\0')
				s++;
			rstr[word][letter] = '\0';
			word++;
			rstr[word] = callocl(len_until(s, c) + 1, 1);
			letter = 0;
		}
		else
		{
			rstr[word][letter] = *s;
			letter++;
			s++;
		}
	}
	while (*s == c && *s != '\0')
		s++;
	rstr[word][letter] = '\0';
	word++;
	rstr[word] = callocl(len_until(s, c) + 1, 1);
	letter = 0;
	rstr[word + 1] = NULL;
	return (rstr);
}
