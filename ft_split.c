/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:15:12 by marde-vr          #+#    #+#             */
/*   Updated: 2023/11/03 22:12:40 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
int	ft_nword(char const *s, char c)
{

}
*/
char	**ft_split(char const *s, char c)
{
/*
	char	**str_array;
	int		i;
	int		j;
	int		k;
	int		start;
	int		end;
	char	*str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);

	


	while (s[i])
	{
		start = i;
		j = start;
		while (s[j] != c)
			j++;
		end = j;
		str = malloc(end - start +1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, s + start, end - start + 1);
		str_array[k++] = str;

		i = end + 1;
	}
	
	return (str_array);
*/
	(void)s;
	(void)c;
	return(0);

}
