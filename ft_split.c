/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:15:12 by marde-vr          #+#    #+#             */
/*   Updated: 2023/11/04 18:12:26 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nword(char const *s, char c)
{
	int	nword;
	int	i;

	nword = 0;
	i = 1;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			nword++;
		i++;
	}
	return (nword);
}

int	ft_get_word_i(char const *s, char c, int word)
{
	int	i;
	int	word_i;

	i = 0;
	word_i = 0;
	while (s[i] && word_i < word)
	{
		if (s[i] == c && s[i - 1] != c)
			word_i++;
		i++;
	}
	return (i);
}

void	*ft_cpy_word(char const *s, char c, int word_i)
{
	int		start;
	char	*word;
	int		len;
	int		i;

	start = ft_get_word_i(s, c, word_i);
	i = start;
	while (s[i] != c && s[i])
		i++;
	len = i - start + 1; /// + 1?
	word = malloc(sizeof(char *) * len + 1);
	ft_strlcpy(word, s + start, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int		nword;
	int		i;

	if (!s)
		return (NULL);
	// if (!c)
	// 	return?
	nword = ft_nword(s, c);
	str_array = malloc(sizeof(char *) * nword + 1);
	if (!str_array)
		return (NULL);
	i = 0;
	while (i < nword)
	{
		str_array[i] = ft_cpy_word(s, c, i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;
	char **str_array;
	char s[25] = "split me please";

	i = 0;
	str_array = malloc(4);
	str_array = ft_split(s, ' ');
	while (str_array[i])
	{
		printf("%d: %s\n", i, str_array[i]);
		i++;
	}
	return (0);
}
*/
