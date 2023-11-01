/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:24:59 by marde-vr          #+#    #+#             */
/*   Updated: 2023/11/01 23:30:06 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_chrcount(char const *s1, char const *set)
{
	int				count;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	count = 0;
	while (i < ft_strlen(set))
	{
		j = 0;
		while (j < ft_strlen(s1))
		{
			if (s1[i] == set[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	str = malloc(ft_strlen(s1) - ft_chrcount(s1, set) + 1);
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] != set[j])
			{
				str[k] = s1[i];
				k++;
			}
			j++;
		}
		i++;
	}
	str[k] = 0;
	return (str);
}
#include <stdio.h>
int main(void)
{
	printf("%s",ft_strtrim("a a   aaaaatestaa    aaa","a "));
	return (0);
}
