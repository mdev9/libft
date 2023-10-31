/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:07:02 by marde-vr          #+#    #+#             */
/*   Updated: 2023/10/31 14:00:39 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;

	i = 0;
	ptr = (char *)big;
	if (*little == 0)
		return (ptr);
	while (big[i] && i < (int)len)
	{	
		if (big[i] == little[0])
		{
			k = i;
			j = 0;
			while (big[i++] == little[j++] && i < (int)len)
			{
				if (little[j] == '\0')
					return (ptr + k);
			}
			i = k;
		}
		i++;
	}
	return (0);
}
